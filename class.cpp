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
		int tin;
};
class Staff : public User{
	public:
		int sss;
};
int main(){
		Student stud;
		Professor prof;
		Staff staff;
		cout << "Student Name: ";
		cin >> stud.name;
		cout << "Input id num: ";
		cin >> stud.id_num;
		cout << "Number of subject: ";
		cin >> stud.subject;
		cout << "Number of books: ";
		cin >> stud.books;
		cout<< endl;
		
		cout << "Professor Name: ";
		cin >> prof.name;
		cout << "ID Number: ";
		cin >> prof.id_num;
		cout << "Tin: ";
		cin >> prof.tin;
		cout<<endl;
		
		cout << "Staff Name: ";
		cin >> staff.name;
		cout << "ID Number: ";
		cin >> staff.id_num;
		cout << "SSS: ";
		cin >> staff.sss;
		
		cout<<endl<<endl;
		cout <<"Name of student: " <<  stud.name <<endl;
		cout << "ID Num: " <<  stud.id_num<<endl;
		cout << "Number of subject: " <<  stud.subject << endl;
		cout << "Number of books: " <<  stud.books<<endl<<endl;

		cout <<"Professor Name: " <<  prof.name <<endl;
		cout << "ID Num: " <<  prof.id_num<<endl;
		cout << "Tin: " <<  prof.tin<<endl<<endl;
		
		cout <<"Staff Name: " <<  staff.name <<endl;
		cout << "ID Num: " <<  staff.id_num<<endl;
		cout << "SSS: " <<  staff.sss;
}
