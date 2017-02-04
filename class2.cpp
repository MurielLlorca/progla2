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
		int id_num;
		int tin;
};
class staff : public user{
	public:
		int sss;
};
int main(){
	student stud[3];
	professor prof[3];
	staff Staff[3];
	
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
		cin >> Staff[i].name;
		cout << "ID Number: ";
		cin >> Staff[i].id_num;
		cout << "SSS: ";
		cin >> Staff[i].sss;
		cout << endl;
	}
	
	cout << endl;
	for (int i=0; i<3; i++){
		cout << i+1 << "Name of student: " <<  stud[i].name <<endl;
		cout << "ID Num: " <<  stud[i].id_num<<endl;
		cout << "Number of subject: " <<  stud[i].subject << endl;
		cout << "Number of books: " <<  stud[i].books;
		
		cout << i+1 << "Professor Name: " <<  prof[i].name <<endl;
		cout << "ID Num: " <<  prof[i].id_num<<endl;
		cout << "Tin: " <<  prof[i].tin;
		
		cout << i+1 << "Staff Name: " <<  Staff[i].name <<endl;
		cout << "ID Num: " <<  Staff[i].id_num<<endl;
		cout << "SSS: " <<  Staff[i].sss;
	}
}
