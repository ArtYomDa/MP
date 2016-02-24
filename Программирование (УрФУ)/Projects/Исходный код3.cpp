#include <iostream>
#include <string>
using namespace std;

long double fact(int n);

int main()
{
	int n, m;
	setlocale(LC_CTYPE, "Russian");
	cout << "���� n ���������� ����� � m ��������� �������." << endl << "���������� ��������� ���������� ��������� ������������ ����� �� ������" << endl;
	cout << "������� ����� �����:" << endl << "n=";
	cin >> n;
	cout  << endl << "������� ����� �������:" << endl << "m=";
	cin >> m;
	int s= fact(m) / fact(n) / fact(m-n) ;
	cout << endl << "����� �� ������������ ������: " << s << " ���������" << endl;
	system ("pause");
	return 0;
};

long double fact(int N)
{
    if(N < 0) // ���� ������������ ���� ������������� �����
        return 0; // ���������� ����
    if (N == 0) // ���� ������������ ���� ����,
        return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1
    else // �� ���� ��������� �������
        return N * fact(N - 1); // ������ ��������.
}