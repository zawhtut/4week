#!/bin/sh

ldapsearch -Q "sn=*bon*" | grep sn: | grep sn -c
