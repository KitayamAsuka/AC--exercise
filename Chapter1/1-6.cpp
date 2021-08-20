#include <iostream>
#include <string>

int main()
{
    std::cout<<"What is your name?";
    std::string name;
    std::cin>>name;
    std::cout<<"Hello,"<<name
             <<std::endl<<"And what is yours?";
    std::cin>>name;
    std::cout<<"Hello"<<name
             <<";nice to meet you too!"<<std::endl;
    system("pause");
    return 0;
}
//实际上分成两次被输入进去了，这样第二次cin的时候就没有输入直接把Beckett给弄进去了