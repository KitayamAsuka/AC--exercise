#include<iostream>
#include<string>

int main()
{
    {
        const std::string s="a string";
        std::cout<<s<<std::endl;
    }
    {
        const std::string s="another string";
        std::cout<<s<<std::endl;
    }
    system("pause");
    return 0;
}
//这个{}相当于限定了局部变量的范围吧，相当于有两个局部变量s所以可以两次初始化
//另外以后不删除   system("pause");了，好麻烦。