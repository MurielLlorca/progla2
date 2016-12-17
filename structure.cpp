struct Person{
	int toes;
	int knees;
	int shoulder;
	int head;
};
int main()
{
	Person person;
	cout << "toes";
	cin >> person.toes;
	cout << "knees";
	cin >> person.knees;
	cout << "shoulder";
	cin >> person.shoulder;
	cout << "head";
	cin >> person.head;
	
	cout << person.toes << endl;
	cout << person.knees << endl;
	cout << person.shoulder << endl;
	cout << person.head << endl;
	
	return 0;
}
