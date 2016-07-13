#include <iostream>
//函数内部不宜定义与全局变量同名的新变量
int i = 42;
int reused = 42;
int main()
{
    int unique = 0;
    std::cout << reused << " " << unique << std::endl;
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;
    std::cout << ::reused << " " << unique << std::endl;

    // practice 2.13

    int i = 100;
    int j = i;
    std::cout << j << std::endl;


    return 0;
}