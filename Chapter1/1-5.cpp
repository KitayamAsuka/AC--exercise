#include <iostream>
#include <string>

int main()
{
    std::string s="a string";
    std::string x=s+",really";
    std::cout<<s<<std::endl;
    std::cout<<x<<std::endl;
    system("pause");
    return 0;
}
//改之前的问题就是x是局部变量，出了范围之后就没有值了，所以显示不了