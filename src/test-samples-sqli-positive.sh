#!/bin/sh
#
# XSS Sample Tests
#
set -e
${VALGRIND} ./reader -q -i -m 19 ../data/sqli-*.txt

