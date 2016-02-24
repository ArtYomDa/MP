#include <stdio.h>
#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

struct Room
{
	Distance x;
	Distance y;
	Distance z;  //x- ������, y- ������, z- �����.
};

void vvod(int i, Room* box);
Distance sum(Room *box, int i);
Distance sum1(Room *box, int i);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int i;
	cout << "������� ���������� ������, ������� �� ������ ����������� � ����� ����:" << endl;
	cin >> i;
	Room* box = new Room[i];
	vvod(i, box);
	Distance S = sum(box, i), Pol = sum1(box, i);
	cout << "����� ������� ���� ����� " << S.feet << " ����� " << S.inches << "������" << endl;
	cout << "� ����� ������� ���� ���������� " << Pol.feet << " ����� " << Pol.inches << "������" << endl;
	delete []box;
	system ("pause");
	return 0;
}


void vvod (int i, Room* box)
{
	int j;
	for(j=0; j<i; j++)
    {
		int numkomn = j+1;
        cin.sync();
        cout << "������� ������ " << numkomn << " ������� � �����: " << endl;
		cin >> box[j].x.feet;
		cout << " � ������: " << endl;
		cin >> box[j].x.inches;
        cout << "������� ������ " << numkomn << " ������� � �����: " << endl;
		cin>>box[j].y.feet;
		cout << " � ������: " << endl;
		cin>>box[j].y.inches;
        cout << "������� ����� " << numkomn << " �������  � �����: " << endl;
		cin >> box[j].z.feet;
		cout << " � ������: " << endl;
		cin >> box[j].z.inches;
		cout << endl;
    }
}

Distance sum(Room *box, int i)
{
	Distance S;
	for(int j=0; j<i; j++)
	{
		float plst = 2 * (box[j].y.feet) * (box[j].x.feet + box[j].z.feet );
		S.feet +=plst;
	}
	for(int j=0; j<i; j++)
	{
		float plst = 2 * ( box[j].y.inches/144) * ( box[j].x.inches/144 + box[j].z.inches/144);
		S.feet +=plst;
	}
	return S;
}

Distance sum1(Room *box, int i)
{
	Distance Pol;
	for(int j=0; j<i; j++)
	{
		float plpol = (box[j].x.feet) * (box[j].z.feet );
		Pol.feet +=plpol;
	}
	for(int j=0; j<i; j++)
	{
		float plpol = (box[j].x.inches/144) * ( box[j].z.inches/144);
		Pol.inches +=plpol;
	}
	return Pol;
}
