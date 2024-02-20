#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int dol, cent;
	double number;
	cout << "Введите сумму (например: 12.0): ";
	cin >> number;
	dol = number;
	cent = (number - dol) * 100;
	cout << "Указанная сумма: " << dol << " долларов" << "\t" << cent << " центов.\n";



	return 0;
}
