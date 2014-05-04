#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/BitShekel.png
ICON_DST=../../src/qt/res/icons/BitShekel.ico
convert ${ICON_SRC} -resize 16x16 BitShekel-16.png
convert ${ICON_SRC} -resize 32x32 BitShekel-32.png
convert ${ICON_SRC} -resize 48x48 BitShekel-48.png
convert BitShekel-16.png BitShekel-32.png BitShekel-48.png ${ICON_DST}

