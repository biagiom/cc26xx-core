#!/bin/bash

#  pack-release.sh - Bash script to help packaging samd core releases.
#  Copyright (c) 2015 Arduino LLC.  All right reserved.
#  Copyright (c) 2017 Biagio Montaruli.  All right reserved.
#
#  This library is free software; you can redistribute it and/or
#  modify it under the terms of the GNU Lesser General Public
#  License as published by the Free Software Foundation; either
#  version 2.1 of the License, or (at your option) any later version.
#
#  This library is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#  Lesser General Public License for more details.
#
#  You should have received a copy of the GNU Lesser General Public
#  License along with this library; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

PWD=`pwd`
FOLDERNAME=`basename $PWD`
echo "Current folder: $FOLDERNAME"
THIS_SCRIPT_NAME=`basename $0`

if [ "$FOLDERNAME" != "cc26xx-core" ]; then
    echo "Please execute this script in the cc26xx-core directory"
else
    VERSION=`grep version= platform.txt | sed 's/version=//g'`
    echo "cc26xx-core package version: $VERSION"
    
    rm -f cc26xx-$VERSION.tar.bz2

    cd ..
    tar --transform "s|$FOLDERNAME|$FOLDERNAME/$VERSION|g" --exclude=extras/** --exclude=.git* -cjf cc26xx-$VERSION.tar.bz2 $FOLDERNAME
    cd -

    mv ../cc26xx-$VERSION.tar.bz2 .

    echo "SHA256 checksum:"
    sha256sum cc26xx-$VERSION.tar.bz2
    stat -f cc26xx-$VERSION.tar.bz2
fi
