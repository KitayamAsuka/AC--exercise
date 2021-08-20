#include<iostream>
int main()
{
    const std::string hello="Hello";
    const std::string message=hello+ ",world"+"!";
    std::cout<<message<<std::endl;
    system("pause");
    return 0;
}