/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED
# define YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ORAdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_SYM = 258,
    ACCESSIBLE_SYM = 259,
    ADD = 260,
    ALL = 261,
    ALTER = 262,
    ANALYZE_SYM = 263,
    AND_AND_SYM = 264,
    AND_SYM = 265,
    AS = 266,
    ASC = 267,
    ASENSITIVE_SYM = 268,
    BEFORE_SYM = 269,
    BETWEEN_SYM = 270,
    BIGINT = 271,
    BINARY = 272,
    BIN_NUM = 273,
    BIT_AND = 274,
    BIT_OR = 275,
    BIT_XOR = 276,
    BLOB_MARIADB_SYM = 277,
    BLOB_ORACLE_SYM = 278,
    BODY_ORACLE_SYM = 279,
    BOTH = 280,
    BY = 281,
    CALL_SYM = 282,
    CASCADE = 283,
    CASE_SYM = 284,
    CAST_SYM = 285,
    CHANGE = 286,
    CHAR_SYM = 287,
    CHECK_SYM = 288,
    COLLATE_SYM = 289,
    CONDITION_SYM = 290,
    CONSTRAINT = 291,
    CONTINUE_MARIADB_SYM = 292,
    CONTINUE_ORACLE_SYM = 293,
    CONVERT_SYM = 294,
    COUNT_SYM = 295,
    CREATE = 296,
    CROSS = 297,
    CUME_DIST_SYM = 298,
    CURDATE = 299,
    CURRENT_USER = 300,
    CURRENT_ROLE = 301,
    CURSOR_SYM = 302,
    CURTIME = 303,
    DATABASE = 304,
    DATABASES = 305,
    DATE_ADD_INTERVAL = 306,
    DATE_SUB_INTERVAL = 307,
    DAY_HOUR_SYM = 308,
    DAY_MICROSECOND_SYM = 309,
    DAY_MINUTE_SYM = 310,
    DAY_SECOND_SYM = 311,
    DECIMAL_NUM = 312,
    DECIMAL_SYM = 313,
    DECLARE_MARIADB_SYM = 314,
    DECLARE_ORACLE_SYM = 315,
    DEFAULT = 316,
    DELETE_DOMAIN_ID_SYM = 317,
    DELETE_SYM = 318,
    DENSE_RANK_SYM = 319,
    DESC = 320,
    DESCRIBE = 321,
    DETERMINISTIC_SYM = 322,
    DISTINCT = 323,
    DIV_SYM = 324,
    DOUBLE_SYM = 325,
    DO_DOMAIN_IDS_SYM = 326,
    DOT_DOT_SYM = 327,
    DROP = 328,
    DUAL_SYM = 329,
    EACH_SYM = 330,
    ELSE = 331,
    ELSEIF_MARIADB_SYM = 332,
    ELSIF_ORACLE_SYM = 333,
    ENCLOSED = 334,
    END_OF_INPUT = 335,
    EQUAL_SYM = 336,
    ESCAPED = 337,
    EXCEPT_SYM = 338,
    EXISTS = 339,
    EXTRACT_SYM = 340,
    FALSE_SYM = 341,
    FETCH_SYM = 342,
    FIRST_VALUE_SYM = 343,
    FLOAT_NUM = 344,
    FLOAT_SYM = 345,
    FOREIGN = 346,
    FOR_SYM = 347,
    FOR_SYSTEM_TIME_SYM = 348,
    FROM = 349,
    FULLTEXT_SYM = 350,
    GE = 351,
    GOTO_ORACLE_SYM = 352,
    GRANT = 353,
    GROUP_SYM = 354,
    GROUP_CONCAT_SYM = 355,
    LAG_SYM = 356,
    LEAD_SYM = 357,
    HAVING = 358,
    HEX_NUM = 359,
    HEX_STRING = 360,
    HOUR_MICROSECOND_SYM = 361,
    HOUR_MINUTE_SYM = 362,
    HOUR_SECOND_SYM = 363,
    IDENT = 364,
    IDENT_QUOTED = 365,
    IF_SYM = 366,
    IGNORE_DOMAIN_IDS_SYM = 367,
    IGNORE_SYM = 368,
    INDEX_SYM = 369,
    INFILE = 370,
    INNER_SYM = 371,
    INOUT_SYM = 372,
    INSENSITIVE_SYM = 373,
    INSERT = 374,
    INTERSECT_SYM = 375,
    INTERVAL_SYM = 376,
    INTO = 377,
    INT_SYM = 378,
    IN_SYM = 379,
    IS = 380,
    ITERATE_SYM = 381,
    JOIN_SYM = 382,
    KEYS = 383,
    KEY_SYM = 384,
    KILL_SYM = 385,
    LE = 386,
    LEADING = 387,
    LEAVE_SYM = 388,
    LEFT = 389,
    LEFT_PAREN_ALT = 390,
    LEFT_PAREN_WITH = 391,
    LEFT_PAREN_LIKE = 392,
    LEX_HOSTNAME = 393,
    LIKE = 394,
    LIMIT = 395,
    LINEAR_SYM = 396,
    LINES = 397,
    LOAD = 398,
    LOCATOR_SYM = 399,
    LOCK_SYM = 400,
    LONGBLOB = 401,
    LONGTEXT = 402,
    LONG_NUM = 403,
    LONG_SYM = 404,
    LOOP_SYM = 405,
    LOW_PRIORITY = 406,
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 407,
    MATCH = 408,
    MAX_SYM = 409,
    MAXVALUE_SYM = 410,
    MEDIAN_SYM = 411,
    MEDIUMBLOB = 412,
    MEDIUMINT = 413,
    MEDIUMTEXT = 414,
    MINUTE_MICROSECOND_SYM = 415,
    MINUTE_SECOND_SYM = 416,
    MIN_SYM = 417,
    MODIFIES_SYM = 418,
    MOD_SYM = 419,
    MYSQL_CONCAT_SYM = 420,
    NATURAL = 421,
    NCHAR_STRING = 422,
    NE = 423,
    NEG = 424,
    NOT2_SYM = 425,
    NOT_SYM = 426,
    NOW_SYM = 427,
    NO_WRITE_TO_BINLOG = 428,
    NTILE_SYM = 429,
    NULL_SYM = 430,
    NUM = 431,
    NUMERIC_SYM = 432,
    NTH_VALUE_SYM = 433,
    ON = 434,
    OPTIMIZE = 435,
    OPTIONALLY = 436,
    ORACLE_CONCAT_SYM = 437,
    OR2_SYM = 438,
    ORDER_SYM = 439,
    OR_SYM = 440,
    OTHERS_ORACLE_SYM = 441,
    OUTER = 442,
    OUTFILE = 443,
    OUT_SYM = 444,
    OVER_SYM = 445,
    PACKAGE_ORACLE_SYM = 446,
    PAGE_CHECKSUM_SYM = 447,
    PARAM_MARKER = 448,
    PARSE_VCOL_EXPR_SYM = 449,
    PARTITION_SYM = 450,
    PERCENT_ORACLE_SYM = 451,
    PERCENT_RANK_SYM = 452,
    PERCENTILE_CONT_SYM = 453,
    PERCENTILE_DISC_SYM = 454,
    PORTION_SYM = 455,
    POSITION_SYM = 456,
    PRECISION = 457,
    PRIMARY_SYM = 458,
    PROCEDURE_SYM = 459,
    PURGE = 460,
    RAISE_ORACLE_SYM = 461,
    RANGE_SYM = 462,
    RANK_SYM = 463,
    READS_SYM = 464,
    READ_SYM = 465,
    READ_WRITE_SYM = 466,
    REAL = 467,
    RECURSIVE_SYM = 468,
    REF_SYSTEM_ID_SYM = 469,
    REFERENCES = 470,
    REGEXP = 471,
    RELEASE_SYM = 472,
    RENAME = 473,
    REPEAT_SYM = 474,
    REPLACE = 475,
    REQUIRE_SYM = 476,
    RESIGNAL_SYM = 477,
    RESTRICT = 478,
    RETURNING_SYM = 479,
    RETURN_MARIADB_SYM = 480,
    RETURN_ORACLE_SYM = 481,
    REVOKE = 482,
    RIGHT = 483,
    ROWS_SYM = 484,
    ROWTYPE_ORACLE_SYM = 485,
    ROW_NUMBER_SYM = 486,
    SECOND_MICROSECOND_SYM = 487,
    SELECT_SYM = 488,
    SENSITIVE_SYM = 489,
    SEPARATOR_SYM = 490,
    SERVER_OPTIONS = 491,
    SET = 492,
    SET_VAR = 493,
    SHIFT_LEFT = 494,
    SHIFT_RIGHT = 495,
    SHOW = 496,
    SIGNAL_SYM = 497,
    SMALLINT = 498,
    SPATIAL_SYM = 499,
    SPECIFIC_SYM = 500,
    SQLEXCEPTION_SYM = 501,
    SQLSTATE_SYM = 502,
    SQLWARNING_SYM = 503,
    SQL_BIG_RESULT = 504,
    SQL_SMALL_RESULT = 505,
    SQL_SYM = 506,
    SSL_SYM = 507,
    STARTING = 508,
    STATS_AUTO_RECALC_SYM = 509,
    STATS_PERSISTENT_SYM = 510,
    STATS_SAMPLE_PAGES_SYM = 511,
    STDDEV_SAMP_SYM = 512,
    STD_SYM = 513,
    STRAIGHT_JOIN = 514,
    SUBSTRING = 515,
    SUM_SYM = 516,
    SYSDATE = 517,
    TABLE_REF_PRIORITY = 518,
    TABLE_SYM = 519,
    TERMINATED = 520,
    TEXT_STRING = 521,
    THEN_SYM = 522,
    TINYBLOB = 523,
    TINYINT = 524,
    TINYTEXT = 525,
    TO_SYM = 526,
    TRAILING = 527,
    TRIGGER_SYM = 528,
    TRIM = 529,
    TRUE_SYM = 530,
    ULONGLONG_NUM = 531,
    UNDERSCORE_CHARSET = 532,
    UNDO_SYM = 533,
    UNION_SYM = 534,
    UNIQUE_SYM = 535,
    UNLOCK_SYM = 536,
    UNSIGNED = 537,
    UPDATE_SYM = 538,
    USAGE = 539,
    USE_SYM = 540,
    USING = 541,
    UTC_DATE_SYM = 542,
    UTC_TIMESTAMP_SYM = 543,
    UTC_TIME_SYM = 544,
    VALUES = 545,
    VALUES_IN_SYM = 546,
    VALUES_LESS_SYM = 547,
    VARBINARY = 548,
    VARCHAR = 549,
    VARIANCE_SYM = 550,
    VARYING = 551,
    VAR_SAMP_SYM = 552,
    WHEN_SYM = 553,
    WHERE = 554,
    WHILE_SYM = 555,
    WITH = 556,
    WITH_CUBE_SYM = 557,
    WITH_ROLLUP_SYM = 558,
    WITH_SYSTEM_SYM = 559,
    XOR = 560,
    YEAR_MONTH_SYM = 561,
    ZEROFILL = 562,
    IMPOSSIBLE_ACTION = 563,
    BODY_MARIADB_SYM = 564,
    ELSEIF_ORACLE_SYM = 565,
    ELSIF_MARIADB_SYM = 566,
    EXCEPTION_ORACLE_SYM = 567,
    GOTO_MARIADB_SYM = 568,
    OTHERS_MARIADB_SYM = 569,
    PACKAGE_MARIADB_SYM = 570,
    RAISE_MARIADB_SYM = 571,
    ROWTYPE_MARIADB_SYM = 572,
    ACCOUNT_SYM = 573,
    ACTION = 574,
    ADMIN_SYM = 575,
    ADDDATE_SYM = 576,
    AFTER_SYM = 577,
    AGAINST = 578,
    AGGREGATE_SYM = 579,
    ALGORITHM_SYM = 580,
    ALWAYS_SYM = 581,
    ANY_SYM = 582,
    ASCII_SYM = 583,
    AT_SYM = 584,
    ATOMIC_SYM = 585,
    AUTHORS_SYM = 586,
    AUTOEXTEND_SIZE_SYM = 587,
    AUTO_INC = 588,
    AUTO_SYM = 589,
    AVG_ROW_LENGTH = 590,
    AVG_SYM = 591,
    BACKUP_SYM = 592,
    BEGIN_MARIADB_SYM = 593,
    BEGIN_ORACLE_SYM = 594,
    BINLOG_SYM = 595,
    BIT_SYM = 596,
    BLOCK_SYM = 597,
    BOOL_SYM = 598,
    BOOLEAN_SYM = 599,
    BTREE_SYM = 600,
    BYTE_SYM = 601,
    CACHE_SYM = 602,
    CASCADED = 603,
    CATALOG_NAME_SYM = 604,
    CHAIN_SYM = 605,
    CHANGED = 606,
    CHARSET = 607,
    CHECKPOINT_SYM = 608,
    CHECKSUM_SYM = 609,
    CIPHER_SYM = 610,
    CLASS_ORIGIN_SYM = 611,
    CLIENT_SYM = 612,
    CLOB_MARIADB_SYM = 613,
    CLOB_ORACLE_SYM = 614,
    CLOSE_SYM = 615,
    COALESCE = 616,
    CODE_SYM = 617,
    COLLATION_SYM = 618,
    COLON_ORACLE_SYM = 619,
    COLUMNS = 620,
    COLUMN_ADD_SYM = 621,
    COLUMN_CHECK_SYM = 622,
    COLUMN_CREATE_SYM = 623,
    COLUMN_DELETE_SYM = 624,
    COLUMN_GET_SYM = 625,
    COLUMN_SYM = 626,
    COLUMN_NAME_SYM = 627,
    COMMENT_SYM = 628,
    COMMITTED_SYM = 629,
    COMMIT_SYM = 630,
    COMPACT_SYM = 631,
    COMPLETION_SYM = 632,
    COMPRESSED_SYM = 633,
    CONCURRENT = 634,
    CONNECTION_SYM = 635,
    CONSISTENT_SYM = 636,
    CONSTRAINT_CATALOG_SYM = 637,
    CONSTRAINT_NAME_SYM = 638,
    CONSTRAINT_SCHEMA_SYM = 639,
    CONTAINS_SYM = 640,
    CONTEXT_SYM = 641,
    CONTRIBUTORS_SYM = 642,
    CPU_SYM = 643,
    CUBE_SYM = 644,
    CURRENT_SYM = 645,
    CURRENT_POS_SYM = 646,
    CURSOR_NAME_SYM = 647,
    CYCLE_SYM = 648,
    DATAFILE_SYM = 649,
    DATA_SYM = 650,
    DATETIME = 651,
    DATE_FORMAT_SYM = 652,
    DATE_SYM = 653,
    DAY_SYM = 654,
    DEALLOCATE_SYM = 655,
    DECODE_MARIADB_SYM = 656,
    DECODE_ORACLE_SYM = 657,
    DEFINER_SYM = 658,
    DELAYED_SYM = 659,
    DELAY_KEY_WRITE_SYM = 660,
    DES_KEY_FILE = 661,
    DIAGNOSTICS_SYM = 662,
    DIRECTORY_SYM = 663,
    DISABLE_SYM = 664,
    DISCARD = 665,
    DISK_SYM = 666,
    DO_SYM = 667,
    DUMPFILE = 668,
    DUPLICATE_SYM = 669,
    DYNAMIC_SYM = 670,
    ENABLE_SYM = 671,
    END = 672,
    ENDS_SYM = 673,
    ENGINES_SYM = 674,
    ENGINE_SYM = 675,
    ENUM = 676,
    ERROR_SYM = 677,
    ERRORS = 678,
    ESCAPE_SYM = 679,
    EVENTS_SYM = 680,
    EVENT_SYM = 681,
    EVERY_SYM = 682,
    EXCHANGE_SYM = 683,
    EXAMINED_SYM = 684,
    EXCLUDE_SYM = 685,
    EXECUTE_SYM = 686,
    EXCEPTION_MARIADB_SYM = 687,
    EXIT_MARIADB_SYM = 688,
    EXIT_ORACLE_SYM = 689,
    EXPANSION_SYM = 690,
    EXPIRE_SYM = 691,
    EXPORT_SYM = 692,
    EXTENDED_SYM = 693,
    EXTENT_SIZE_SYM = 694,
    FAST_SYM = 695,
    FAULTS_SYM = 696,
    FILE_SYM = 697,
    FIRST_SYM = 698,
    FIXED_SYM = 699,
    FLUSH_SYM = 700,
    FOLLOWS_SYM = 701,
    FOLLOWING_SYM = 702,
    FORCE_SYM = 703,
    FORMAT_SYM = 704,
    FOUND_SYM = 705,
    FULL = 706,
    FUNCTION_SYM = 707,
    GENERAL = 708,
    GENERATED_SYM = 709,
    GEOMETRYCOLLECTION = 710,
    GEOMETRY_SYM = 711,
    GET_FORMAT = 712,
    GET_SYM = 713,
    GLOBAL_SYM = 714,
    GRANTS = 715,
    HANDLER_SYM = 716,
    HARD_SYM = 717,
    HASH_SYM = 718,
    HELP_SYM = 719,
    HIGH_PRIORITY = 720,
    HISTORY_SYM = 721,
    HOST_SYM = 722,
    HOSTS_SYM = 723,
    HOUR_SYM = 724,
    ID_SYM = 725,
    IDENTIFIED_SYM = 726,
    IGNORE_SERVER_IDS_SYM = 727,
    IMMEDIATE_SYM = 728,
    IMPORT = 729,
    INCREMENT_SYM = 730,
    INDEXES = 731,
    INITIAL_SIZE_SYM = 732,
    INSERT_METHOD = 733,
    INSTALL_SYM = 734,
    INVOKER_SYM = 735,
    IO_SYM = 736,
    IPC_SYM = 737,
    ISOLATION = 738,
    ISOPEN_SYM = 739,
    ISSUER_SYM = 740,
    INVISIBLE_SYM = 741,
    JSON_SYM = 742,
    KEY_BLOCK_SIZE = 743,
    LANGUAGE_SYM = 744,
    LAST_SYM = 745,
    LAST_VALUE = 746,
    LASTVAL_SYM = 747,
    LEAVES = 748,
    LESS_SYM = 749,
    LEVEL_SYM = 750,
    LINESTRING = 751,
    LIST_SYM = 752,
    LOCAL_SYM = 753,
    LOCKS_SYM = 754,
    LOGFILE_SYM = 755,
    LOGS_SYM = 756,
    MASTER_CONNECT_RETRY_SYM = 757,
    MASTER_DELAY_SYM = 758,
    MASTER_GTID_POS_SYM = 759,
    MASTER_HOST_SYM = 760,
    MASTER_LOG_FILE_SYM = 761,
    MASTER_LOG_POS_SYM = 762,
    MASTER_PASSWORD_SYM = 763,
    MASTER_PORT_SYM = 764,
    MASTER_SERVER_ID_SYM = 765,
    MASTER_SSL_CAPATH_SYM = 766,
    MASTER_SSL_CA_SYM = 767,
    MASTER_SSL_CERT_SYM = 768,
    MASTER_SSL_CIPHER_SYM = 769,
    MASTER_SSL_CRL_SYM = 770,
    MASTER_SSL_CRLPATH_SYM = 771,
    MASTER_SSL_KEY_SYM = 772,
    MASTER_SSL_SYM = 773,
    MASTER_SYM = 774,
    MASTER_USER_SYM = 775,
    MASTER_USE_GTID_SYM = 776,
    MASTER_HEARTBEAT_PERIOD_SYM = 777,
    MAX_CONNECTIONS_PER_HOUR = 778,
    MAX_QUERIES_PER_HOUR = 779,
    MAX_ROWS = 780,
    MAX_SIZE_SYM = 781,
    MAX_UPDATES_PER_HOUR = 782,
    MAX_STATEMENT_TIME_SYM = 783,
    MAX_USER_CONNECTIONS_SYM = 784,
    MEDIUM_SYM = 785,
    MEMORY_SYM = 786,
    MERGE_SYM = 787,
    MESSAGE_TEXT_SYM = 788,
    MICROSECOND_SYM = 789,
    MIGRATE_SYM = 790,
    MINUTE_SYM = 791,
    MINVALUE_SYM = 792,
    MIN_ROWS = 793,
    MODE_SYM = 794,
    MODIFY_SYM = 795,
    MONTH_SYM = 796,
    MULTILINESTRING = 797,
    MULTIPOINT = 798,
    MULTIPOLYGON = 799,
    MUTEX_SYM = 800,
    MYSQL_SYM = 801,
    MYSQL_ERRNO_SYM = 802,
    NAMES_SYM = 803,
    NAME_SYM = 804,
    NATIONAL_SYM = 805,
    NCHAR_SYM = 806,
    NEVER_SYM = 807,
    NEW_SYM = 808,
    NEXT_SYM = 809,
    NEXTVAL_SYM = 810,
    NOCACHE_SYM = 811,
    NOCYCLE_SYM = 812,
    NODEGROUP_SYM = 813,
    NONE_SYM = 814,
    NOTFOUND_SYM = 815,
    NO_SYM = 816,
    NOMAXVALUE_SYM = 817,
    NOMINVALUE_SYM = 818,
    NO_WAIT_SYM = 819,
    NOWAIT_SYM = 820,
    NUMBER_MARIADB_SYM = 821,
    NUMBER_ORACLE_SYM = 822,
    NVARCHAR_SYM = 823,
    OF_SYM = 824,
    OFFSET_SYM = 825,
    OLD_PASSWORD_SYM = 826,
    ONE_SYM = 827,
    ONLY_SYM = 828,
    ONLINE_SYM = 829,
    OPEN_SYM = 830,
    OPTIONS_SYM = 831,
    OPTION = 832,
    OWNER_SYM = 833,
    PACK_KEYS_SYM = 834,
    PAGE_SYM = 835,
    PARSER_SYM = 836,
    PARTIAL = 837,
    PARTITIONS_SYM = 838,
    PARTITIONING_SYM = 839,
    PASSWORD_SYM = 840,
    PERIOD_SYM = 841,
    PERSISTENT_SYM = 842,
    PHASE_SYM = 843,
    PLUGINS_SYM = 844,
    PLUGIN_SYM = 845,
    POINT_SYM = 846,
    POLYGON = 847,
    PORT_SYM = 848,
    PRECEDES_SYM = 849,
    PRECEDING_SYM = 850,
    PREPARE_SYM = 851,
    PRESERVE_SYM = 852,
    PREV_SYM = 853,
    PREVIOUS_SYM = 854,
    PRIVILEGES = 855,
    PROCESS = 856,
    PROCESSLIST_SYM = 857,
    PROFILE_SYM = 858,
    PROFILES_SYM = 859,
    PROXY_SYM = 860,
    QUARTER_SYM = 861,
    QUERY_SYM = 862,
    QUICK = 863,
    RAW_MARIADB_SYM = 864,
    RAW_ORACLE_SYM = 865,
    READ_ONLY_SYM = 866,
    REBUILD_SYM = 867,
    RECOVER_SYM = 868,
    REDOFILE_SYM = 869,
    REDO_BUFFER_SIZE_SYM = 870,
    REDUNDANT_SYM = 871,
    RELAY = 872,
    RELAYLOG_SYM = 873,
    RELAY_LOG_FILE_SYM = 874,
    RELAY_LOG_POS_SYM = 875,
    RELAY_THREAD = 876,
    RELOAD = 877,
    REMOVE_SYM = 878,
    REORGANIZE_SYM = 879,
    REPAIR = 880,
    REPEATABLE_SYM = 881,
    REPLICATION = 882,
    RESET_SYM = 883,
    RESTART_SYM = 884,
    RESOURCES = 885,
    RESTORE_SYM = 886,
    RESUME_SYM = 887,
    RETURNED_SQLSTATE_SYM = 888,
    RETURNS_SYM = 889,
    REUSE_SYM = 890,
    REVERSE_SYM = 891,
    ROLE_SYM = 892,
    ROLLBACK_SYM = 893,
    ROLLUP_SYM = 894,
    ROUTINE_SYM = 895,
    ROWCOUNT_SYM = 896,
    ROW_SYM = 897,
    ROW_COUNT_SYM = 898,
    ROW_FORMAT_SYM = 899,
    RTREE_SYM = 900,
    SAVEPOINT_SYM = 901,
    SCHEDULE_SYM = 902,
    SCHEMA_NAME_SYM = 903,
    SECOND_SYM = 904,
    SECURITY_SYM = 905,
    SEQUENCE_SYM = 906,
    SERIALIZABLE_SYM = 907,
    SERIAL_SYM = 908,
    SESSION_SYM = 909,
    SERVER_SYM = 910,
    SETVAL_SYM = 911,
    SHARE_SYM = 912,
    SHUTDOWN = 913,
    SIGNED_SYM = 914,
    SIMPLE_SYM = 915,
    SLAVE = 916,
    SLAVES = 917,
    SLAVE_POS_SYM = 918,
    SLOW = 919,
    SNAPSHOT_SYM = 920,
    SOCKET_SYM = 921,
    SOFT_SYM = 922,
    SONAME_SYM = 923,
    SOUNDS_SYM = 924,
    SOURCE_SYM = 925,
    SQL_BUFFER_RESULT = 926,
    SQL_CACHE_SYM = 927,
    SQL_CALC_FOUND_ROWS = 928,
    SQL_NO_CACHE_SYM = 929,
    SQL_THREAD = 930,
    STAGE_SYM = 931,
    STARTS_SYM = 932,
    START_SYM = 933,
    STATEMENT_SYM = 934,
    STATUS_SYM = 935,
    STOP_SYM = 936,
    STORAGE_SYM = 937,
    STORED_SYM = 938,
    STRING_SYM = 939,
    SUBCLASS_ORIGIN_SYM = 940,
    SUBDATE_SYM = 941,
    SUBJECT_SYM = 942,
    SUBPARTITIONS_SYM = 943,
    SUBPARTITION_SYM = 944,
    SUPER_SYM = 945,
    SUSPEND_SYM = 946,
    SWAPS_SYM = 947,
    SWITCHES_SYM = 948,
    SYSTEM = 949,
    SYSTEM_TIME_SYM = 950,
    TABLES = 951,
    TABLESPACE = 952,
    TABLE_CHECKSUM_SYM = 953,
    TABLE_NAME_SYM = 954,
    TEMPORARY = 955,
    TEMPTABLE_SYM = 956,
    TEXT_SYM = 957,
    THAN_SYM = 958,
    TIES_SYM = 959,
    TIMESTAMP = 960,
    TIMESTAMP_ADD = 961,
    TIMESTAMP_DIFF = 962,
    TIME_SYM = 963,
    TRANSACTION_SYM = 964,
    TRANSACTIONAL_SYM = 965,
    TRIGGERS_SYM = 966,
    TRIM_ORACLE = 967,
    TRUNCATE_SYM = 968,
    TYPES_SYM = 969,
    TYPE_SYM = 970,
    UDF_RETURNS_SYM = 971,
    UNBOUNDED_SYM = 972,
    UNCOMMITTED_SYM = 973,
    UNDEFINED_SYM = 974,
    UNDOFILE_SYM = 975,
    UNDO_BUFFER_SIZE_SYM = 976,
    UNICODE_SYM = 977,
    UNINSTALL_SYM = 978,
    UNKNOWN_SYM = 979,
    UNTIL_SYM = 980,
    UPGRADE_SYM = 981,
    USER_SYM = 982,
    USE_FRM = 983,
    VALUE_SYM = 984,
    VARCHAR2_MARIADB_SYM = 985,
    VARCHAR2_ORACLE_SYM = 986,
    VARIABLES = 987,
    VERSIONING_SYM = 988,
    VIA_SYM = 989,
    VIEW_SYM = 990,
    VIRTUAL_SYM = 991,
    WAIT_SYM = 992,
    WARNINGS = 993,
    WEEK_SYM = 994,
    WEIGHT_STRING_SYM = 995,
    WINDOW_SYM = 996,
    WITHIN = 997,
    WITHOUT = 998,
    WORK_SYM = 999,
    WRAPPER_SYM = 1000,
    WRITE_SYM = 1001,
    X509_SYM = 1002,
    XA_SYM = 1003,
    XML_SYM = 1004,
    YEAR_SYM = 1005,
    CONDITIONLESS_JOIN = 1006,
    ON_SYM = 1007,
    PREC_BELOW_NOT = 1008,
    SUBQUERY_AS_EXPR = 1009,
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1010,
    USER = 1011,
    PREC_BELOW_CONTRACTION_TOKEN2 = 1012,
    EMPTY_FROM_CLAUSE = 1013
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 173 "/home/buildbot/git/sql/sql_yacc_ora.yy" /* yacc.c:1909  */

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  uint sp_instr_addr;

  /* structs */
  LEX_CSTRING lex_str;
  Lex_ident_cli_st kwd;
  Lex_ident_cli_st ident_cli;
  Lex_ident_sys_st ident_sys;
  Lex_string_with_metadata_st lex_string_with_metadata;
  Lex_spblock_st spblock;
  Lex_spblock_handlers_st spblock_handlers;
  Lex_length_and_dec_st Lex_length_and_dec;
  Lex_cast_type_st Lex_cast_type;
  Lex_field_type_st Lex_field_type;
  Lex_dyncol_type_st Lex_dyncol_type;
  Lex_for_loop_st for_loop;
  Lex_for_loop_bounds_st for_loop_bounds;
  Lex_trim_st trim;
  vers_history_point_t vers_history_point;
  struct
  {
    enum sub_select_type unit_type;
    bool distinct;
  } unit_operation;
  struct
  {
    SELECT_LEX *first;
    SELECT_LEX *prev_last;
  } select_list;
  SQL_I_List<ORDER> *select_order;
  Lex_select_lock select_lock;
  Lex_select_limit select_limit;
  Lex_order_limit_lock *order_limit_lock;

  /* pointers */
  Create_field *create_field;
  Spvar_definition *spvar_definition;
  Row_definition_list *spvar_definition_list;
  const Type_handler *type_handler;
  CHARSET_INFO *charset;
  Condition_information_item *cond_info_item;
  DYNCALL_CREATE_DEF *dyncol_def;
  Diagnostics_information *diag_info;
  Item *item;
  Item_num *item_num;
  Item_param *item_param;
  Item_basic_constant *item_basic_constant;
  Key_part_spec *key_part;
  LEX *lex;
  sp_assignment_lex *assignment_lex;
  class sp_lex_cursor *sp_cursor_stmt;
  LEX_CSTRING *lex_str_ptr;
  LEX_USER *lex_user;
  USER_AUTH *user_auth;
  List<Condition_information_item> *cond_info_list;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  List<Item> *item_list;
  List<sp_assignment_lex> *sp_assignment_lex_list;
  List<Statement_information_item> *stmt_info_list;
  List<String> *string_list;
  List<LEX_CSTRING> *lex_str_list;
  Statement_information_item *stmt_info_item;
  String *string;
  TABLE_LIST *table_list;
  Table_ident *table;
  Qualified_column_ident *qualified_column_ident;
  char *simple_string;
  const char *const_simple_string;
  chooser_compare_func_creator boolfunc2creator;
  class my_var *myvar;
  class sp_condition_value *spcondvalue;
  class sp_head *sphead;
  class sp_name *spname;
  class sp_variable *spvar;
  class With_clause *with_clause;
  class Virtual_column_info *virtual_column;

  handlerton *db_type;
  st_select_lex *select_lex;
  st_select_lex_unit *select_lex_unit;
  struct p_elem_val *p_elem_value;
  class Window_frame *window_frame;
  class Window_frame_bound *window_frame_bound;
  udf_func *udf;
  st_trg_execution_order trg_execution_order;

  /* enums */
  enum enum_sp_suid_behaviour sp_suid;
  enum enum_sp_aggregate_type sp_aggregate_type;
  enum enum_view_suid view_suid;
  enum Condition_information_item::Name cond_info_item_name;
  enum enum_diag_condition_item_name diag_condition_item_name;
  enum Diagnostics_information::Which_area diag_area;
  enum Field::geometry_type geom_type;
  enum enum_fk_option m_fk_option;
  enum Item_udftype udf_type;
  enum Key::Keytype key_type;
  enum Statement_information_item::Name stmt_info_item_name;
  enum enum_filetype filetype;
  enum enum_tx_isolation tx_isolation;
  enum enum_var_type var_type;
  enum enum_yes_no_unknown m_yes_no_unk;
  enum ha_choice choice;
  enum ha_key_alg key_alg;
  enum ha_rkey_function ha_rkey_mode;
  enum index_hint_type index_hint;
  enum interval_type interval, interval_time_st;
  enum row_type row_type;
  enum sp_variable::enum_mode spvar_mode;
  enum thr_lock_type lock_type;
  enum enum_mysql_timestamp_type date_time_type;
  enum Window_frame_bound::Bound_precedence_type bound_precedence_type;
  enum Window_frame::Frame_units frame_units;
  enum Window_frame::Frame_exclusion frame_exclusion;
  enum trigger_order_type trigger_action_order_type;
  DDL_options_st object_ddl_options;
  enum vers_sys_type_t vers_range_unit;
  enum Column_definition::enum_column_versioning vers_column_versioning;
  enum plsql_cursor_attr_t plsql_cursor_attr;

#line 938 "/home/buildbot/git/mkdist/sql/sql_yacc_ora.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int ORAparse (THD *thd);

#endif /* !YY_ORA_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_ORA_HH_INCLUDED  */
