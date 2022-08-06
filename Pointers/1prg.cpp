#include <iostream>
using namespace std;
int main()
{
	int num=5;
	int *ptr= &num;
	cout<<"Value of num : " <<endl;
	cout<<num<<endl;
	cout<<*(ptr)<<endl;
	cout<<"Address of num : "<<endl;
	cout<<&num<<endl;
	cout<<ptr<<endl;
	cout<<"Address of pointer : "<<endl;
	cout<<&ptr<<endl;

	int *q = ptr;
	cout<<"value q is pointing to : "<<*q<<endl;
	cout<<"Address of q : "<<&q<<endl;
	cout<<"Address in q : "<<q<<endl;

	// int *r = *ptr; error
	// int *r=&ptr  error ->  pointer is of integer type and we are passing  address of pointer to pointer
	int **r=&ptr; 
	cout<<"Vadue stored in Address stored in r  to : "<<**r<<endl;
	cout<<"value r is pointing to : "<<*r<<endl;
	cout<<"Address of r : "<<&r<<endl;
	cout<<"Address in r : "<<r<<endl;


}
