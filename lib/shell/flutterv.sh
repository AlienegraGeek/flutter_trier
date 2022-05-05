#!/bin/sh

rm -rf ~/env/flutter
cd ~/env || exit

if [ ! -d "flutter" ]; then
  mkdir flutter
else
  echo dir exist
  exit
fi
cp -r ~/env/flutter_2.8.1/ ~/env/flutter/