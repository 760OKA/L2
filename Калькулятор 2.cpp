#include <iostream>
using namespace std;
double calculation2(double op1, double op2, char sign, int a, int b)
{
	op1 = 0;
	cout << "Введтие число А: ";
	cin >> op1;
	op2 = 0;
	cout << "Введтие число Б: ";
	cin >> op2;
	sign = 0;
	cout << "Введтие оператор: ";
	cin >> sign;
	a = op1;
	b = op2;
	if (sign == '/' && op2 == 0)
	{
		return 0;
	}
	else
	{
		if (sign == '+')
		{
			return op1 + op2;
		}
		else if (sign == '-')
		{
			return op1 - op2;
		}
		else if (sign == '*')
		{
			return op1 * op2;
		}
		else if (sign == '/')
		{
			return op1 / op2;
		}
		else if (sign == '%')
		{
			return a % b;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	setlocale(0, "");
	double op1 = 0;
	double op2 = 0;
	char sign = 0;
	int a = 0;
	int b = 0;
	cout << calculation2(op1, op2, sign, a, b);
	int _;
	cin >> _;
	return 0;
}