#include<iostream>
using namespace std;
int main()
{
	for (int i=1 ; i<=100 ; i++)
	{
		if (i%3 == 0 && i%5 == 0)
		{
			cout << "Ed Pogi" << endl;
		}
		else if (i%5 == 0)
		{
			cout << "Ed" << endl;
		}
		else if (i%3 == 0)
		{
			cout << "Pogi" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	
	return 0;
}
