#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

class TranslRus
{
private:
	string text;
public:
	TranslRus()
	{
		ifstream file;
		file.open("C:\\Users\\������\\Desktop\\file3.txt");
		string text;
		getline(file, text);
		file.close();
	}
	void Coder()
	{
		ofstream file;
		file.open("C:\\Users\\������\\Desktop\\file3.txt");

		for (int i = 1; size_t(i) < text.size(); ++i)
		{
			if(size_t(i)=='�')
			{size_t(i)='q'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='w'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='e'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='r'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='t'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='y'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='u'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='i'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='o'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='p'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='a'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='s'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='d'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='f'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='g'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='h'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='j'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='k'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='l'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='z'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='x'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='c'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='v'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='b'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='n'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='m'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='<'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='>'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='['; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)==']'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='-'; file << size_t(i);}
			else if(size_t(i)='�')
			{size_t(i)=='+'; file << size_t(i);}
			else {size_t(i)==' '; file << size_t(i);}
			}
		file.close();
	}

};