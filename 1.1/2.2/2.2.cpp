#include <iostream>
int a;
int main()
{
    int units_sold1 = 0;
    int units_sold2 = {0};
    int units_sold3{0};
    int units_sold4(0);

    std::cout << units_sold1 << std::endl; 
    std::cout << units_sold2 << std::endl; 
    std::cout << units_sold3 << std::endl; 
    std::cout << units_sold4 << std::endl; 
    std::cout << a << std::endl;
    int i = 3.14;

    
    return 0;
}