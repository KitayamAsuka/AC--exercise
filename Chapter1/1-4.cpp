#include <iostream>
#include <string>

int main()
{
    {
        const std::string s="a string";
        std::cout<<s<<std::endl;
        {
            const std::string s="another string";
            {{std::cout <<s<<std::endl;};}
            std::cout<<s<<std::endl;
        };
    }
    system("pause");
    return 0;
}
//emm改了好像没区别啊，这里应该是想要根据决定的范围不同出现不同的效果吧