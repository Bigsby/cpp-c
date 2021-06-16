BUILD_DIR=cbuild

cmake -S src/ -B $BUILD_DIR 

cmake --build $BUILD_DIR 

echo
echo

./$BUILD_DIR/CClient
echo
echo
./$BUILD_DIR/CppClient
