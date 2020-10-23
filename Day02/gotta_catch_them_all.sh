#!/bin/bash
cut -d ":" -f 5 | grep  -c " $1"
