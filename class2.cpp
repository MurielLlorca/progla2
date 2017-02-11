#include <iostream>
#include<string>
using namespace std;
class User{
	public:
		string name;
		int id_num;
};
class Student : public User{
	public:
		int subject;
		int books;
	
};
class Professor : public User{
	public:
		int id_num;
		int tin;
};
class Staff : public User{
	public:
		int sss;
};
int main(){
	Student stud[3];
	Professor prof[3];
	Staff staff[3];
	
	for(int i=0; i<3; i++){
		cout << "Student Name: ";
		cin >> stud[i].name;
		cout << "Input id num: ";
		cin >> stud[i].id_num;
		cout << "Number of subject: ";
		cin >> stud[i].subject;
		cout << "Number of books: ";
		cin >> stud[i].books;
		cout<< endl;
    
		cout << "Professor Name: ";
		cin >> prof[i].name;
		cout << "ID Number: ";
		cin >> prof[i].id_num;
		cout << "Tin: ";
		cin >> prof[i].tin;
		cout << endl;
    
		cout << "Staff Name: ";
		cin >> staff[i].name;
		cout << "ID Number: ";
		cin >> staff[i].id_num;
		cout << "SSS: ";
		cin >> staff[i].sss;
		cout << endl;
	}
	
	cout << endl;
	for (int i=0; i<3; i++){
		cout << i+1<<" "<< "Name of student: " <<stud[i].name << endl;
		cout << "ID Num: " <<stud[i].id_num << endl;
		cout << "Number of subject: " <<stud[i].subject << endl;
		cout << "Number of books: " <<stud[i].books << endl;
		cout <<endl;
		
		cout << i+1 << " " << "Professor Name: " <<prof[i].name << endl;
		cout << "ID Num: " <<prof[i].id_num << endl;
		cout << "Tin: " <<prof[i].tin << endl;
		cout << endl;
		
		cout << i+1 << " " << "Staff Name: " <<staff[i].name << endl;
		cout << "ID Num: " <<staff[i].id_num << endl;
		cout << "SSS: " <<staff[i].sss << endl;
		cout << endl;
	}
}
