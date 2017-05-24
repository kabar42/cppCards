#!/bin/bash

SCRIPT_DIR=`dirname "$(readlink -f "$0")"`
BUILD_DIR="$SCRIPT_DIR/../build"

if [ -e "$BUILD_DIR/release" ]; then
    rm -r "$BUILD_DIR/release"
fi

if [ -e "$BUILD_DIR/debug" ]; then
    rm -r "$BUILD_DIR/debug"
fi
