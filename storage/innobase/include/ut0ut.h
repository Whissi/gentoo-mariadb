/*****************************************************************************

Copyright (c) 1994, 2016, Oracle and/or its affiliates. All Rights Reserved.
Copyright (c) 2019, MariaDB Corporation.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1335 USA

*****************************************************************************/

/******************************************************************//**
@file include/ut0ut.h
Various utilities

Created 1/20/1994 Heikki Tuuri
***********************************************************************/

#ifndef ut0ut_h
#define ut0ut_h

/* Do not include univ.i because univ.i includes this. */

#include <ostream>
#include <sstream>
#include <string.h>

#ifndef UNIV_INNOCHECKSUM

#include "db0err.h"

#include <time.h>

#ifndef MYSQL_SERVER
#include <ctype.h>
#endif /* MYSQL_SERVER */

#include <stdarg.h>

#include <string>

/** Index name prefix in fast index creation, as a string constant */
#define TEMP_INDEX_PREFIX_STR	"\377"

#ifdef HAVE_PAUSE_INSTRUCTION
   /* According to the gcc info page, asm volatile means that the
   instruction has important side-effects and must not be removed.
   Also asm volatile may trigger a memory barrier (spilling all registers
   to memory). */
# ifdef __SUNPRO_CC
#  define UT_RELAX_CPU() asm ("pause" )
# else
#  define UT_RELAX_CPU() __asm__ __volatile__ ("pause")
# endif /* __SUNPRO_CC */

#elif defined(HAVE_FAKE_PAUSE_INSTRUCTION)
# define UT_RELAX_CPU() __asm__ __volatile__ ("rep; nop")
#elif defined _WIN32
   /* In the Win32 API, the x86 PAUSE instruction is executed by calling
   the YieldProcessor macro defined in WinNT.h. It is a CPU architecture-
   independent way by using YieldProcessor. */
# define UT_RELAX_CPU() YieldProcessor()
#elif defined(__powerpc__) && defined __GLIBC__
# include <sys/platform/ppc.h>
# define UT_RELAX_CPU() __ppc_get_timebase()
#else
# define UT_RELAX_CPU() do { \
     volatile int32	volatile_var; \
     int32 oldval= 0; \
     my_atomic_cas32(&volatile_var, &oldval, 1); \
   } while (0)
#endif

#if defined (__GNUC__)
# define UT_COMPILER_BARRIER() __asm__ __volatile__ ("":::"memory")
#elif defined (_MSC_VER)
# define UT_COMPILER_BARRIER() _ReadWriteBarrier()
#else
# define UT_COMPILER_BARRIER()
#endif

#if defined(HAVE_HMT_PRIORITY_INSTRUCTION)
# include <sys/platform/ppc.h>
# define UT_LOW_PRIORITY_CPU() __ppc_set_ppr_low()
# define UT_RESUME_PRIORITY_CPU() __ppc_set_ppr_med()
#else
# define UT_LOW_PRIORITY_CPU() ((void)0)
# define UT_RESUME_PRIORITY_CPU() ((void)0)
#endif

#define ut_max	std::max
#define ut_min	std::min

/** Calculate the minimum of two pairs.
@param[out]	min_hi	MSB of the minimum pair
@param[out]	min_lo	LSB of the minimum pair
@param[in]	a_hi	MSB of the first pair
@param[in]	a_lo	LSB of the first pair
@param[in]	b_hi	MSB of the second pair
@param[in]	b_lo	LSB of the second pair */
UNIV_INLINE
void
ut_pair_min(
	ulint*	min_hi,
	ulint*	min_lo,
	ulint	a_hi,
	ulint	a_lo,
	ulint	b_hi,
	ulint	b_lo);
/******************************************************//**
Compares two ulints.
@return 1 if a > b, 0 if a == b, -1 if a < b */
UNIV_INLINE
int
ut_ulint_cmp(
/*=========*/
	ulint	a,	/*!< in: ulint */
	ulint	b);	/*!< in: ulint */
/** Compare two pairs of integers.
@param[in]	a_h	more significant part of first pair
@param[in]	a_l	less significant part of first pair
@param[in]	b_h	more significant part of second pair
@param[in]	b_l	less significant part of second pair
@return comparison result of (a_h,a_l) and (b_h,b_l)
@retval -1 if (a_h,a_l) is less than (b_h,b_l)
@retval 0 if (a_h,a_l) is equal to (b_h,b_l)
@retval 1 if (a_h,a_l) is greater than (b_h,b_l) */
UNIV_INLINE
int
ut_pair_cmp(
	ulint	a_h,
	ulint	a_l,
	ulint	b_h,
	ulint	b_l)
	MY_ATTRIBUTE((warn_unused_result));

/*************************************************************//**
Calculates fast the remainder of n/m when m is a power of two.
@param n in: numerator
@param m in: denominator, must be a power of two
@return the remainder of n/m */
template <typename T> inline T ut_2pow_remainder(T n, T m){return n & (m - 1);}
/*************************************************************//**
Calculates the biggest multiple of m that is not bigger than n
when m is a power of two.  In other words, rounds n down to m * k.
@param n in: number to round down
@param m in: alignment, must be a power of two
@return n rounded down to the biggest possible integer multiple of m */
template <typename T> inline T ut_2pow_round(T n, T m) { return n & ~(m - 1); }
/********************************************************//**
Calculates the smallest multiple of m that is not smaller than n
when m is a power of two.  In other words, rounds n up to m * k.
@param n in: number to round up
@param m in: alignment, must be a power of two
@return n rounded up to the smallest possible integer multiple of m */
#define UT_CALC_ALIGN(n, m) ((n + m - 1) & ~(m - 1))
template <typename T> inline T ut_calc_align(T n, T m)
{ return UT_CALC_ALIGN(n, m); }

/*************************************************************//**
Calculates fast the 2-logarithm of a number, rounded upward to an
integer.
@return logarithm in the base 2, rounded upward */
UNIV_INLINE
ulint
ut_2_log(
/*=====*/
	ulint	n);	/*!< in: number */
/*************************************************************//**
Calculates 2 to power n.
@return 2 to power n */
UNIV_INLINE
ulint
ut_2_exp(
/*=====*/
	ulint	n);	/*!< in: number */
/*************************************************************//**
Calculates fast the number rounded up to the nearest power of 2.
@return first power of 2 which is >= n */
ulint
ut_2_power_up(
/*==========*/
	ulint	n)	/*!< in: number != 0 */
	MY_ATTRIBUTE((const));

/** Determine how many bytes (groups of 8 bits) are needed to
store the given number of bits.
@param b in: bits
@return number of bytes (octets) needed to represent b */
#define UT_BITS_IN_BYTES(b) (((b) + 7) / 8)

/**********************************************************//**
Returns the number of milliseconds since some epoch.  The
value may wrap around.  It should only be used for heuristic
purposes.
@return ms since epoch */
ulint
ut_time_ms(void);
/*============*/
#endif /* !UNIV_INNOCHECKSUM */

/** Determines if a number is zero or a power of two.
@param[in]	n	number
@return nonzero if n is zero or a power of two; zero otherwise */
#define ut_is_2pow(n) UNIV_LIKELY(!((n) & ((n) - 1)))

/** Functor that compares two C strings. Can be used as a comparator for
e.g. std::map that uses char* as keys. */
struct ut_strcmp_functor
{
	bool operator()(
		const char*	a,
		const char*	b) const
	{
		return(strcmp(a, b) < 0);
	}
};

/**********************************************************//**
Prints a timestamp to a file. */
void
ut_print_timestamp(
/*===============*/
	FILE*	file)	/*!< in: file where to print */
	ATTRIBUTE_COLD __attribute__((nonnull));

#ifndef UNIV_INNOCHECKSUM

/**********************************************************//**
Sprintfs a timestamp to a buffer, 13..14 chars plus terminating NUL. */
void
ut_sprintf_timestamp(
/*=================*/
	char*	buf); /*!< in: buffer where to sprintf */
/*************************************************************//**
Runs an idle loop on CPU. The argument gives the desired delay
in microseconds on 100 MHz Pentium + Visual C++.
@return dummy value */
void
ut_delay(
/*=====*/
	ulint	delay);	/*!< in: delay in microseconds on 100 MHz Pentium */
/*************************************************************//**
Prints the contents of a memory buffer in hex and ascii. */
void
ut_print_buf(
/*=========*/
	FILE*		file,	/*!< in: file where to print */
	const void*	buf,	/*!< in: memory buffer */
	ulint		len);	/*!< in: length of the buffer */

/*************************************************************//**
Prints the contents of a memory buffer in hex. */
void
ut_print_buf_hex(
/*=============*/
	std::ostream&	o,	/*!< in/out: output stream */
	const void*	buf,	/*!< in: memory buffer */
	ulint		len)	/*!< in: length of the buffer */
	MY_ATTRIBUTE((nonnull));
/*************************************************************//**
Prints the contents of a memory buffer in hex and ascii. */
void
ut_print_buf(
/*=========*/
	std::ostream&	o,	/*!< in/out: output stream */
	const void*	buf,	/*!< in: memory buffer */
	ulint		len)	/*!< in: length of the buffer */
	MY_ATTRIBUTE((nonnull));

/* Forward declaration of transaction handle */
struct trx_t;

/** Get a fixed-length string, quoted as an SQL identifier.
If the string contains a slash '/', the string will be
output as two identifiers separated by a period (.),
as in SQL database_name.identifier.
 @param		[in]	trx		transaction (NULL=no quotes).
 @param		[in]	name		table name.
 @retval	String quoted as an SQL identifier.
*/
std::string
ut_get_name(
	const trx_t*	trx,
	const char*	name);

/**********************************************************************//**
Outputs a fixed-length string, quoted as an SQL identifier.
If the string contains a slash '/', the string will be
output as two identifiers separated by a period (.),
as in SQL database_name.identifier. */
void
ut_print_name(
/*==========*/
	FILE*		ef,	/*!< in: stream */
	const trx_t*	trx,	/*!< in: transaction */
	const char*	name);	/*!< in: table name to print */
/** Format a table name, quoted as an SQL identifier.
If the name contains a slash '/', the result will contain two
identifiers separated by a period (.), as in SQL
database_name.table_name.
@see table_name_t
@param[in]	name		table or index name
@param[out]	formatted	formatted result, will be NUL-terminated
@param[in]	formatted_size	size of the buffer in bytes
@return pointer to 'formatted' */
char*
ut_format_name(
	const char*	name,
	char*		formatted,
	ulint		formatted_size);

/**********************************************************************//**
Catenate files. */
void
ut_copy_file(
/*=========*/
	FILE*	dest,	/*!< in: output file */
	FILE*	src);	/*!< in: input file to be appended to output */

/*************************************************************//**
Convert an error number to a human readable text message. The
returned string is static and should not be freed or modified.
@return string, describing the error */
const char*
ut_strerr(
/*======*/
	dberr_t	num);	/*!< in: error number */

#endif /* !UNIV_INNOCHECKSUM */

#ifdef UNIV_PFS_MEMORY

/** Extract the basename of a file without its extension.
For example, extract "foo0bar" out of "/path/to/foo0bar.cc".
@param[in]	file		file path, e.g. "/path/to/foo0bar.cc"
@param[out]	base		result, e.g. "foo0bar"
@param[in]	base_size	size of the output buffer 'base', if there
is not enough space, then the result will be truncated, but always
'\0'-terminated
@return number of characters that would have been printed if the size
were unlimited (not including the final ‘\0’) */
size_t
ut_basename_noext(
	const char*	file,
	char*		base,
	size_t		base_size);

#endif /* UNIV_PFS_MEMORY */

namespace ib {

/** This is a wrapper class, used to print any unsigned integer type
in hexadecimal format.  The main purpose of this data type is to
overload the global operator<<, so that we can print the given
wrapper value in hex. */
struct hex {
	explicit hex(uintmax_t t): m_val(t) {}
	const uintmax_t	m_val;
};

/** This is an overload of the global operator<< for the user defined type
ib::hex.  The unsigned value held in the ib::hex wrapper class will be printed
into the given output stream in hexadecimal format.
@param[in,out]	lhs	the output stream into which rhs is written.
@param[in]	rhs	the object to be written into lhs.
@retval	reference to the output stream. */
inline
std::ostream&
operator<<(
	std::ostream&	lhs,
	const hex&	rhs)
{
	std::ios_base::fmtflags	ff = lhs.flags();
	lhs << std::showbase << std::hex << rhs.m_val;
	lhs.setf(ff);
	return(lhs);
}

/** The class logger is the base class of all the error log related classes.
It contains a std::ostringstream object.  The main purpose of this class is
to forward operator<< to the underlying std::ostringstream object.  Do not
use this class directly, instead use one of the derived classes. */
class logger {
public:
	template<typename T>
	ATTRIBUTE_COLD
	logger& operator<<(const T& rhs)
	{
		m_oss << rhs;
		return(*this);
	}

	/** Write the given buffer to the internal string stream object.
	@param[in]	buf	the buffer whose contents will be logged.
	@param[in]	count	the length of the buffer buf.
	@return the output stream into which buffer was written. */
	ATTRIBUTE_COLD
	std::ostream&
	write(
		const char*		buf,
		std::streamsize		count)
	{
		return(m_oss.write(buf, count));
	}

	/** Write the given buffer to the internal string stream object.
	@param[in]	buf	the buffer whose contents will be logged.
	@param[in]	count	the length of the buffer buf.
	@return the output stream into which buffer was written. */
	ATTRIBUTE_COLD
	std::ostream&
	write(
		const byte*		buf,
		std::streamsize		count)
	{
		return(m_oss.write(reinterpret_cast<const char*>(buf), count));
	}

	std::ostringstream	m_oss;
protected:
	/* This class must not be used directly, hence making the default
	constructor protected. */
	ATTRIBUTE_COLD
	logger() {}
};

/** The class info is used to emit informational log messages.  It is to be
used similar to std::cout.  But the log messages will be emitted only when
the dtor is called.  The preferred usage of this class is to make use of
unnamed temporaries as follows:

info() << "The server started successfully.";

In the above usage, the temporary object will be destroyed at the end of the
statement and hence the log message will be emitted at the end of the
statement.  If a named object is created, then the log message will be emitted
only when it goes out of scope or destroyed. */
class info : public logger {
public:
	ATTRIBUTE_COLD
	~info();
};

/** The class warn is used to emit warnings.  Refer to the documentation of
class info for further details. */
class warn : public logger {
public:
	ATTRIBUTE_COLD
	~warn();
};

/** The class error is used to emit error messages.  Refer to the
documentation of class info for further details. */
class error : public logger {
public:
	ATTRIBUTE_COLD
	~error();
};

/** The class fatal is used to emit an error message and stop the server
by crashing it.  Use this class when MySQL server needs to be stopped
immediately.  Refer to the documentation of class info for usage details. */
class fatal : public logger {
public:
	ATTRIBUTE_NORETURN
	~fatal();
};

/** Emit an error message if the given predicate is true, otherwise emit a
warning message */
class error_or_warn : public logger {
public:
	ATTRIBUTE_COLD
	error_or_warn(bool	pred)
	: m_error(pred)
	{}

	ATTRIBUTE_COLD
	~error_or_warn();
private:
	const bool	m_error;
};

/** Emit a fatal message if the given predicate is true, otherwise emit a
error message. */
class fatal_or_error : public logger {
public:
	ATTRIBUTE_COLD
	fatal_or_error(bool	pred)
	: m_fatal(pred)
	{}

	ATTRIBUTE_COLD
	~fatal_or_error();
private:
	const bool	m_fatal;
};

} // namespace ib

#include "ut0ut.ic"

#endif

