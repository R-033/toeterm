#!/bin/bash

ver=`git describe`

echo -e \
"#ifndef VERSION_H\n"\
"#define VERSION_H\n"\
"const QString PROGRAM_VERSION=\"$ver\";\n"\
"#endif\n"\
> src/version.h
