#!/bin/sh

for i in {0 ... 500}
do
    sqlite3_rel test.db < test.sql
done
