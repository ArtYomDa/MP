#include <iostream> 
#include <iomanip> 
#include <clocale> 
#include <string> 
#include <vector> 
using namespace std;


class Ship
{
private:
	enum Napr {south, noth, east, west};
	string name;
	int degW, minW, degL, minL;
	Napr W, L;
public:
	
	Ship()
	{}

	void napravl(Napr N)
	{
		switch (N){
		case south: cout << setw(8) << "South"; break;
		case noth: cout  << setw(8)<< "Noth"; break;
		case east: cout << setw(8) << "East"; break;
		case west: cout << setw(8) << "West"; break;
			default: break;
		}
	}

	void set_data()
	{
		int num=0;
		cout << "������� ��� �������: " << endl;
		cin >> name;

		cout << "������� ���������� ������ (�������, ������): " << endl;
		cin >> degW;
		cout << endl;
		cin >> minW;
		cout << endl<< "�������� ����������� (0-��, 1-������, 2-�����, 3-�����)" <<endl;
		cin >> num;
		switch (num)
		{
		case 0: W= south; break;
		case 1: W=noth; break;
		case 2: W=east; break;
		case 3: W= west; break;
		default:{ cout << "Error!"; system("pause"); return; }
			break;
		}
		cout << endl;

		cout << "������� ���������� ������� (�������, ������): " << endl;
		cin >> degL;
		cout << endl;
		cin >> minL;
		cout << endl;
		cout << endl<< "�������� ����������� (0-��, 1-������, 2-�����, 3-�����)" <<endl;
		cin >> num;
		switch (num)
		{
		case 0: L=south; break;
		case 1: L=noth; break;
		case 2: L=east; break;
		case 3: L=west; break;
		default:{ cout << "Error!"; system("pause"); return; }
			break;
		}
		cout << endl;

	}
	void get_data()
	{
		cout << setw(8) <<  name 
			<< setw(8) << degW
			<< setw(8) << minW;
		napravl(W);
		cout << setw(8) << degL
			<< setw(8) << minL;
		napravl(L);
		cout << setw(8) << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian"); 
	int n;
	cout << "���������� ��������: ";
	cin >> n;
	vector <Ship> ship(n);
	for (int i = 0; i < n; i++) 
	{
		cout << "������� � " << i + 1 << endl; 
	ship[i].set_data();
	}

	cout << endl << "�����" << endl;
	cout << setw(32)<< "������" << setw(24) << "�������" << endl;
	cout << setw(8) << "���|" << setw(8) << "�������" << setw(8) << "������ " << setw(8) << "�����������|" 
		<< setw(8) << "�������" << setw(8) << "������ " << setw(8) << "�����������" << endl; 
	for (int i = 0; i < n; i++) 
	{ 
	ship[i].get_data();
	}
	system("pause");
	return 0;
}