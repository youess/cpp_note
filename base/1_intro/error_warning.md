1. clang: warning: treating 'c' input as 'c++' when in C++ mode, this behavior is deprecated
   编译的源文件命名是以.c而不是.cpp

2. comparison of integers of different signs: 'int' and 'std::vector::size_type' (aka 'unsigned long')
   当遍历vector的时候出现
   ```for (int i=0; i<v.size();++i)```, 在c++11之后用`deltype(v.size()) i=0; ...` 指明i的类型和v.size()返回值相同
