#!/bin/bash
# Do Not Use - Not Ready For Shipment
/bin/bash /include/install/toolchain.sh
cp -r . ~/mips64/include/z64ovl
cd ~/mips64/include/z64ovl
/bin/bash /include/install/n64.sh
