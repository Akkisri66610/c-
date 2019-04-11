#include<iostream>
using namespace std;

int main()
{
	int a = 5 && 6;	// any value other than zero is came out to be mostly true and if any one of this is 0 then the 
	// output came out to be false i.e. 0
	cout << a << endl;
	
	int b = 5 || 0;
	cout << b << endl;	// here in this case if any one of the value is non-zero then the 
	// output always came out to be true i.e. 0 
	
	int c = 5 && (0 || 0); // here the value of the logical or came out to be false i.e. 0
	// and with logical and it came out to be false again
	cout << c << endl;
	return 0;	
}
