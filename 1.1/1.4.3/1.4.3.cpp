#include<iostream>/*�˹⵩���й��˵����ԡ���Ѱ���й��˵�λ��֮����*/
int main()
{
	int sum = 0, value = 0;

	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;
	system("pause");
	return 0;

}