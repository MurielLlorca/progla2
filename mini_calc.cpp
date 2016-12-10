#include <iostream>
using namespace std;

int aAdd(int n1, int n2){
	return n1+n2;
}
int aSub(int n1, int n2){
	return n1-n2;
}
int aMul(int n1, int n2){
	return n1*n2;
}
int aDiv(int n1, int n2){
	return n1/n2;
}
int main()
{
	int n1, n2;
	cout << "Enter num 1:";
	cin >> n1;
	cout << "Enter num 2:";
	cin >> n2;
	

	cout << "Sum is:"<<aAdd(n1,n2)<<endl;
	cout << "Difference is:"<<aSub(n1,n2)<<endl;
	cout << "Product is:"<<aMul(n1,n2)<<endl;
	cout << "Quotient is:"<<aDiv(n1,n2)<<endl;
	return 0;
}
