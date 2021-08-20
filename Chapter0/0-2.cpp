#include <iostream>

using namespace std;
//所谓命名空间，是一种将程序库名称封装起来的方法，它就像在各个程序库中立起一道道围墙。
//但是滥用namespace会导致引用头文件时被多次使用命名空间造成未知的副作用，在头文件中应使用全名。
int main()
{
    cout<<"This (\") is a quote,and this(\\) is a backlash.";//就是用\来当占位符
    return 0;
}