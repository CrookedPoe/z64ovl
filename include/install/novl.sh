#!/bin/bash

cd /usr/tmp
sudo wget http://www.z64.me/guides/overlay-environment-setup-wsl/novl-wsl.zip
cd /usr/bin
sudo unzip /usr/tmp/novl-wsl.zip
sudo chmod +x novl
cd /usr/tmp
rm -rf novl-wsl.zip