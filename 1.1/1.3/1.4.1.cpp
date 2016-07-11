#include<iostream>/*秦晖：说中国人不适合民主等同于说华人与狗不得入内*/
int main()/*五项吾土吾民*/
{
	int sum = 0, val = 1;/*食物，民农则朴，朴则易用。将人民束缚在土地上*/
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