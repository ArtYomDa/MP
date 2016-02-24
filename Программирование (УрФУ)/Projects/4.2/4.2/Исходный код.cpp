#include <iostream>
#include <stdio.h>
#include <string>
#include <clocale>

using namespace std;

class Auto
{
protected:
	struct Coord
	{
		int x;
		int y;
	};
public:
	float V;
	Coord coordinates;
	float P;
	virtual void InPut(){
		cout << "\n������� �������� ��������(��/�): ";
		cin >> V;
		cout << "���������� X � Y (����� ������): ";
		cin >> coordinates.x >> coordinates.y;
		cout << "������� �������� (�.c.): ";
		cin >> P;
	};
	virtual void OutPut(){
		cout << "\n�������� ������������� ��������" << V << " ��/�\n����������: " << coordinates.x << ":" << coordinates.y << "\n�������� " << P << " �.�.\n";
	};
};

class Bus : public Auto
{
public:
	string Stop;
	float Price;
	void InPut()
	{
		Auto::InPut();
		cout << "������� �������� ���������: ";
		cin >> Stop;
		cout << "������� ������� �������: ";
		cin >> Price;
	}
	void OutPut()
	{
		Auto::OutPut();
		cout  << "\n�� ��������� ''" << Stop << "''\n��������� ������� - " << Price << endl;
	}
	Bus()
	{
		InPut();
	}
	Bus(float speed, Auto::Coord loc, float p, string BusStop, float Pr)
	{
		V = speed;
		coordinates = loc;
		P = p;
		Stop = BusStop;
		Price = Pr;
	}
};

class Big : public Auto
{
public:
	float MaxMass;
	float Mass;
	void InPut()
	{
		Auto::InPut();
		cout << "������������ �����: ";
		cin >> MaxMass;
		cout << "������� �������� �����: ";
		cin >> Mass;
	}
	void OutPut()
	{
		Auto::OutPut();
		cout << "\n�����: " << Mass << " �� " << MaxMass << " �����������.\n";
	}
	Big()
	{
		InPut();
	}
	Big(float speed, Auto::Coord loc, float p, float mxm, float m)
	{
		V = speed;
		coordinates = loc;
		P = p;
		MaxMass = mxm;
		Mass = m;
	}
};

class Mini : public Auto
{
public:
	int SeatsNumber;
	void InPut()
	{
		Auto::InPut();
		cout << "������� ���-�� ����: ";
		cin >> SeatsNumber;
	}
	void OutPut()
	{
		Auto::OutPut();
		cout << "\n��������� ���� - " << SeatsNumber << endl;
	}
	Mini()
	{
		InPut();
	}
	Mini(float speed, Auto::Coord loc, float p,int SsN)
	{
		V = speed;
		coordinates = loc;
		P = p;
		SeatsNumber = SsN;
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	Auto* car[5];
	car[0] = new Bus;
	car[1] = new Big;
	for (int i = 0; i < 3; i++) car[i] = new Mini;
	for (int i = 0; i < 5; i++) car[i]->InPut();
	for (int i = 0; i < 5; i++) car[i]->OutPut();
	system("pause");
}