#include<iostream>/*������ �����ʹ����Ļ�*/
int main()
{
	int sum = 0;
	for (int val = 1; val <= 10; ++val)
		sum += val;
	std::cout << "Sum of 1 to 10 inclusive is " 
			  << sum << std::endl;
	system("pause");
	return 0;
  
}