#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int lol[5];
    FILE *fp;
    fp = fopen("sample1.txt", "w");
    if(!fp)
    {
    	cout << "Cannot open file.\n";
	}
	cout << "Enter 5 number: ";
	for (int i=0; i<5; ++i)
	{
		cin >> lol[i];
	}
	for (int i=4; i>=0; i--)
	{
		cout << lol[i] <<endl;
	}
	system ("pause");
    return 0;
}
