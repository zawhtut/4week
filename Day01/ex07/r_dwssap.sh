#!/bin/sh

cat /etc/passwd |sed -e 's/#.*$//;/^$/d;' | sed n\;g | rev | sed -e 's/.*://' | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' -e 's/$/./'
