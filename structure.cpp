struct Person{
	int toes;
	int knees;
	int shoulder;
	int head;
};
int main()
{
	Person person;
	cout << "Toes: ";
	cin >> person.toes;
	cout << "Knees: ";
	cin >> person.knees;
	cout << "Shoulder: ";
	cin >> person.shoulder;
	cout << "Head: ";
	cin >> person.head;
	
	cout << person.toes << endl;
	cout << person.knees << endl;
	cout << person.shoulder << endl;
	cout << person.head << endl;
	
	return 0;
}
