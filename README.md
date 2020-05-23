# Git Workflow

## Adding a new major version

```
git checkout --orphan mariadb-10.5
git rm -rf .
tar -xaf /tmp/mariadb-10.5.1.tar.gz -C ~/repositories/gentoo-mariadb/ --strip-components=1
find . -name '.gitignore' -delete
git add .
git commit -a -m "Import MariaDB 10.5.1" --signoff
git commit --amend --date="$(stat --format='%y' /tmp/mariadb-10.5.1.tar.gz)"
git tag -m "MariaDB 10.5.1" -a mariadb-10.5.1
```

## Create patch set

```
git checkout mariadb-10.5.1
git checkout -b mariadb-10.5.1-gentoo
# Make modifications
git commit -a --signoff
git format-patch mariadb-10.5.1..
mkdir /tmp/mariadb-patches
mv *.patch /tmp/mariadb-patches

# As root
cd /tmp
chown root:root -R /tmp/mariadb-patches
tar -caf mariadb-10.5.1-patches-01.tar.xz mariadb-patches/
```

## Re-spin patch set

```
# After new version was imported and tagged as mariadb-10.5.2...
git checkout mariadb-10.5.1-gentoo
git checkout -b mariadb-10.5.2-gentoo
git rebase mariadb-10.5.2
```
