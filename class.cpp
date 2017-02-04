#include <iostream>
#include<string>
using namespace std;
class user{
	public:
		string name;
		int id_num;
};
class student : public user{
	public:
		int subject;
		int books;

};
class professor : public user{
	public:
		int tin;
};
class staff : public user{
	public:
		int sss;
};
int main(){
		student stud;
		professor prof;
		staff Staff;
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
		cin >> Staff.name;
		cout << "ID Number: ";
		cin >> Staff.id_num;
		cout << "SSS: ";
		cin >> Staff.sss;
		
		cout<<endl<<endl;
		cout <<"Name of student: " <<  stud.name <<endl;
		cout << "ID Num: " <<  stud.id_num<<endl;
		cout << "Number of subject: " <<  stud.subject << endl;
		cout << "Number of books: " <<  stud.books<<endl<<endl;

		cout <<"Professor Name: " <<  prof.name <<endl;
		cout << "ID Num: " <<  prof.id_num<<endl;
		cout << "Tin: " <<  prof.tin<<endl<<endl;
		
		cout <<"Staff Name: " <<  Staff.name <<endl;
		cout << "ID Num: " <<  Staff.id_num<<endl;
		cout << "SSS: " <<  Staff.sss;
}
