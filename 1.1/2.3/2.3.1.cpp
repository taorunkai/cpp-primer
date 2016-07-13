//lvalue reference 为对象起了另外一个名字

#include <iostream>

int main()
{
    int ival = 1024;
    int &refVal = ival;
    std::cout << refVal << ival << std::endl;
    refVal = 2;
    int ii = refVal;
    std::cout << refVal << ival << ii << std::endl;
    ival++;
    std::cout << refVal << ival << ii << std::endl;
    int &refVal3 = refVal;
    ival++;
    std::cout << refVal << ival << refVal3 << std::endl;
    refVal3++;
    std::cout << refVal << ival << refVal3 << std::endl;

    //practice 2.16
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14159;
    std::cout << r2 << d << r1 << i << std::endl;
    r1 = d;
    std::cout << r2 << d << r1 << i << std::endl;
    r1 = r2;
    std::cout << r2 << d << r1 << i << std::endl;
    r2 = r1;
    std::cout << r2 << d << r1 << i << std::endl;
    

    //practice 2.17
     int j, &rj = j;
     j = 5; rj = 10;
     std::cout << j << " " << rj << std::endl;
     return 0;
}