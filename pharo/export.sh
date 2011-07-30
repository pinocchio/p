#! /bin/bash

# cd to the current directory ================================================
DIR=`readlink "$0"` || DIR="$0";
DIR=`dirname "$DIR"`;
cd "$DIR";

# ============================================================================
EXPORT='exportLinux.st';
PHARO='/usr/local/bin/cog/bin/squeak'

if [[ `uname` ==  'Darwin' ]]; then
    EXPORT='exportOSX.st';
    PHARO='/Applications/CogVM.app/Contents/MacOS/CogVM'
fi

# ============================================================================
#find the pharo image
PHARO_IMAGE=`find . -name '*.image' | head -1`;

echo "Exporting core images...";

#find the pharo VM
$PHARO -headless $PWD/$PHARO_IMAGE $PWD/$EXPORT;

echo "done";
