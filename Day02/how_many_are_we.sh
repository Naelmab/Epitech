#!/bin/bash
grep "$1$" -ic ~/delivery/Day02/students.csv | wc -l

