#include <iostream>
#include <stdio.h>

using namespace std;

class Counter
{
private:
	int Number;
public:
	static int Num;
	Counter()
	{
		Number = Num;
		Num++;
	}
	void get()
	{
		cout << Number << "\n";
	}
};
int Counter :: Num=1;
Counter a = Counter();
Counter b = Counter();

void other()
{
	Counter c = Counter();
	c.get();
}

void main()
{
	setlocale(LC_CTYPE, "Russian");
	Counter d = Counter();
	Counter e = Counter();
	Counter f = Counter();
	cout << "����������" << endl;
	a.get();
	b.get();
	cout << "� main " << endl;
	d.get();
	e.get();
	f.get();
	cout << "������ ������� " << endl;
	other();
	cout << "\n";
	system("pause");
}