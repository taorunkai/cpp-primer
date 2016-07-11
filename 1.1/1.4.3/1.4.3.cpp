#include<iostream>/*潘光旦《中国人的特性》《寻求中国人的位育之道》*/
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