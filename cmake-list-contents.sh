set -x
FILES="cbuild/libCoreLibrary.a cbuild/libWrapper.dylib cbuild/CClient cbuild/CppClient"

nm $FILES

set +x
echo
echo
set -x
otool -L $FILES
