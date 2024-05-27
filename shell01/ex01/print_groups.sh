#!/bin/sh
id --name --groups $FT_USER | tr ' ' ',' | tr -d '\n'
