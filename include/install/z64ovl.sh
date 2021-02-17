#!/bin.bash

cd ~/mips64/include
git clone https://github.com/z64me/z64ovl.git
echo "export Z64OVL_LD=\"\$HOME/mips64/include/z64ovl\"" >> ~/.bashrc