#!/bin/sh

ldapsearch -x -L "(uid=z*)" cn | grep '^cn:' | sort -r -f | cut -c5-100
