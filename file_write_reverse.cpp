#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
   int array[5];
   FILE *fp;
   fp = fopen("sample1.txt", "r");
	cout << "Enter 5 number: ";
	for (int i=0; i<5; ++i)
	{
		cin >> array[i];
	}
	fclose(fp);
	fp = fopen("sample1.txt", "w");
	for (int i=4; i>=0; i--)
	{
		fprintf(fp, "%d\n", array[i]);
	}
}
