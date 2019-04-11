#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	cout << ++x << endl <<  x << endl << x++ << endl;   // here stack memory is working but the output came out to ve wrong
	printf("%d%d%d",++x,x,x++);n
	// The output always printed from left to right but incase of taking variables on to stack they are always 
	// taking from right to left and firstly x++ is pop first followed by x and x++
	return 0;
}
