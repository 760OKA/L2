#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
		while (true) {
		int a = 0;
		cout << "Введите число А: ";
		cin >> a;
		int b = 0;
		cout << "Введите число Б: ";
		cin >> b;
		int c = 0;
		cout << "Введите номер степени: ";
		cin >> c;
		int operation;
		cout << "Введите номер операции: ";
		cin >> operation;
		switch (operation) {
		case 1:
			cout << a + b << endl;
			break;
		case 2:
			cout << a - b << endl;
			break;
		case 3:
			cout << a * b << endl;
			break;
		case 4:
			cout << a / b << endl;
			break;
		case 5:
			cout << a % b << endl;
			break;
		case 6:
			cout << b + a << endl;
			break;
		case 7:
			cout << b - a << endl;
			break;
		case 8:
			cout << b * a << endl;
			break;
		case 9:
			cout << b / a << endl;
			break;
		case 10:
			cout << b % a << endl;
			break;
		case 11:
			cout << a + a << endl;
			break;
		case 12:
			cout << a - a << endl;
			break;
		case 13:
			cout << a * a << endl;
			break;
		case 14:
			cout << a / a << endl;
			break;
		case 15:
			cout << a % a << endl;
			break;
		case 16:
			cout << b + b << endl;
			break;
		case 17:
			cout << b - b << endl;
			break;
		case 18:
			cout << b * b << endl;
			break;
		case 19:
			cout << b / b << endl;
			break;
		case 20:
			cout << b % b << endl;
			break;
		case 21:
			cout << pow(a, c) << endl;
			break;
		case 22:
			cout << pow(b, c) << endl;
			break;
		case 23:
			cout << sqrt(a) << endl;
			break;
		case 24:
			cout << sqrt(b) << endl;
			break;
		default:
			cout << "Это не номер операции!" << endl;
			break;
		}
		return 0;
	}
	int _;
	cin >> _;
	return 0;
}