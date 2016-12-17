#include <iostream>
using namespace std;
struct Person{
	int toes;
	int knees;
	int shoulder;
	int head;
};
void newLine();
int main()
{
	Person person[5];
	int i;
	
	for (i=0;i<5;i++)
	{
	cout << "Person " << i+1 <<endl;
	cout << "toes: ";
	cin >> person[i].toes;
	cout << "knees: ";
	cin >> person[i].knees;
	cout << "shoulder: ";
	cin >> person[i].shoulder;
	cout << "head: ";
	cin >> person[i].head;
	cout<<endl;
	}
	for (i=0;i<5;i++)
	{
	cout << "Person " << i+1 <<endl;
	cout << "Toes: " << person[i].toes << endl;
	cout << "Knees: " << person[i].knees << endl;
	cout << "Shoulder: " << person[i].shoulder << endl;
	cout << "Head: " << person[i].head;
	cout<<endl;
	}
	return 0;
}
