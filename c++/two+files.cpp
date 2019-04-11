#include<iostream>
#include<fstream>
#include<stdlib.h>	// for exit() function
using namespace std;
int main()
{
	const int size = 80;
	char line[size];
	
	ifstream fin1, fin2;		// create two input streams
	fin1.open("country");
	fin2.open("capital");
	
	for(int i = 1; i <= 10; i++)
	{
		if(fin1.eof() != 0)
		{
			cout << "Exit from country \n";
			exit(1);
		}
		fin1.getline(line, size);
		cout << "Capital of " << line ;
		
		if(fin2.eof() != 0)
		{
			cout << "Exit from capital\n";
			exit(1);
		}
		
		fin2.getline(line,size);
		cout << line << "\n";
	}
	
}
