#include<iostream>/*���ͣ�˵�й��˲��ʺ�������ͬ��˵�����빷��������*/
int main()/*������������*/
{
	int sum = 0, val = 1;/*ʳ���ũ���ӣ��������á�������������������*/
	while (val <= 10)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		      << sum << std::endl;

/*practice 1.11*/
	int num1, num2;
	std::cin >> num1 >> num2;
	int val1=num1, sum1 = 0;
	while (val1 <= num2)
	{
		sum1 += val1;
		++val1;
	}
	std::cout << "Sum of " << num1 << " to " << num2 << " inclusive is " << sum1 << std::endl;

	system("pause");
}