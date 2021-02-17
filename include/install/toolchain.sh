#!/bin/bash

echo Update Packages...
sudo apt update

echo Install Dependencies...
sudo apt install mercurial git autoconf wget tar make diffutils texinfo gcc g++ lua5.3 libusb-1.0-0 libelf-dev libglib2.0-dev unzip

echo Building Toolchain...
cd ~ && mkdir -p mips64 mips64-build && cd mips64-build
git clone https://github.com/glankk/n64.git . && autoconf
./configure --prefix=$HOME/mips64
make install-toolchain -j2
echo "export PATH=\"\$PATH:\$HOME/mips64/bin\"" >> ~/.bashrc
echo "export CPATH=\"\$CPATH:\$HOME/mips64/include\"" >> ~/.bashrc