#include<iostream>
using namespace std;

int main()
{
	// cout and cin objects only
	string name;
	char code;
	cout << "Extraction operator cout\n";
	cout << "Enter your name\n";
	cin >> name;
	cout << "Using cin as input stream here\n" << name << endl;
	
	// Remember the operator >> can also be used to read a character but it will skip
	// the white spaces and the newline character
	cout << "as from above output cout reads the data character by character ";
	cout << "And at the encounter of a white space , newlines and tab will be skipped";
	cout << "Suppose the data given to an integer is 1234d then the optput came out to be 1234\n";
	cout << "Enter the code\n";
	cin >> code;	// here the input stream takes space as the input of akash sri
	cout << code << endl; // here output comes out to be 1234 only
	
	string another_name;
	cout << "Enter another name\n" ;
	cin >> another_name; // here d came in the input stream and printes as same
	cout << another_name << endl; 
	
	
	// put() and get() functions
	string c;
	cout << "Enter another name which is long\n";
	cin >> c;
	cout.put(c);
	cout << "What is happening here\n";
	return 0;
}
