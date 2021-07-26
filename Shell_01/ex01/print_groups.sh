#!/bin/sh
groups $FT_USER | sed 's/\s/,/g' | tr -d '\n'