#include<iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;   // cin doesn't count space and newline and tab
	
	while(c != '\n')
	{
		cout << c;
		cin.get(c);  // get and put only works with character type input
	}
	cout << endl;
	
	// Another example of output put function
	char d;	// You can't write here int d because get and put only works with char
	cout << "Enter the integer value to see it is working or not\n";
	while(d != '\n')
	{
		cin.get(d);
	}
	cout.put(68);
	return 0;
}
