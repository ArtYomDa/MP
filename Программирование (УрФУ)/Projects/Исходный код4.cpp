#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double sum, stav, s=0, o=0;
	int years;
	cout << "���� ����� �����: ";
	cin >> sum;
	cout << endl << "������ ������: ";
	cin >> stav;
	cout <<endl;
	for ( years = 1; years <11; years ++)
	{
		sum += sum * stav;
		s = (sum * stav);
		o += s;
		cout << "������� �� " << years << " ���(�)(���) = " << s << endl;
	}
	cout << "����� ������� ����������: " << o << endl;
	system ("pause");
	return 0;
}