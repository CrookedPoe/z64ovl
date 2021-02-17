#!/bin/bash
# Pull /n64 by glankk from github.

rm -rf n64 && rm -rf n64lib
git clone https://github.com/glankk/n64.git
cp -R n64/include/n64/ n64lib/
rm -rf n64
cp -R n64lib/ n64/
rm -rf n64lib