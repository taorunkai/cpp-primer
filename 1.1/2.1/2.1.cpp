#include<iostream>
#include<string>

int main()
{
    char c = L'b';
    int i = -42;
    unsigned u = 10;
    std::cout << i + i << std::endl;
    std::cout << i + u << std::endl;  
    std::cout << c << std::endl;
    //practice
    unsigned u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i1 = 10, i2 = 42;
    std::cout << i2 - i1 << std::endl;
    std::cout << i1 - i2 << std::endl;
    std::cout << i1 - u << std::endl;
    std::cout << u - i1 << std::endl;
    std::cout << L'b' << 'b' << std::endl;//?
    std::cout << u8"hi!" << std::endl;
    std::cout << 1E-3F << std::endl;
    std::cout << L"a" << u"a" << std::endl;
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    return 0;
  
}
