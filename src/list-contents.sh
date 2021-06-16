set -x
nm build/*

set +x
echo
echo
set -x
otool -L build/*
