#!/bin/bash

SCRIPT_DIR=`dirname "$(readlink -f "$0")"`
SRC_DIR="$SCRIPT_DIR/../src"
BUILD_DIR="$SCRIPT_DIR/../build"

BUILD_OPTS=""


case "$1" in
    -d)
    BUILD_DIR="$BUILD_DIR/debug"
    BUILD_OPTS="$BUILD_OPTS -O0 -g"
    ;;
    *)
    BUILD_DIR="$BUILD_DIR/release"
    BUILD_OPTS="$BUILD_OPTS -O3"
    ;;
esac

if [ ! -e "$BUILD_DIR" ]; then
    mkdir -p "$BUILD_DIR"
fi

SRC_FILES=""
for file in $(find $SRC_DIR -name *.cpp); do
    SRC_FILES="$SRC_FILES $file"
done

g++ $SRC_FILES $BUILD_OPTS -o "$BUILD_DIR/cppCards"
