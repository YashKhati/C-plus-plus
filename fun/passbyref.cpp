#include<iostream>
using namespace std;
void increment(int val )
{
    val++;
    cout<<"Inside function = "<<val<<endl;
}
void increment_num(int *val)
{
    (*val)++;
    cout<<"Inside function = "<<*val<<endl;
}

void increment_num1(int &val)
{
    val++;
    cout<<"Inside function = "<<val<<endl;
}

int main()
{
    int a=5;
    cout<<"a = "<<a<<endl;
    int &ref = a;
    cout<<"ref = "<<ref<<endl;
    ref+=10;
    cout<<"ref = "<<ref <<"\na = "<<a<<endl;
    cout<<"address of a = "<<&a<<endl;
    cout<<"address of ref = "<<&ref<<endl;
    cout<<endl;
    
    increment(a);
    cout<<"ref = "<<ref <<"\na = "<<a<<endl;
    increment(ref);
    cout<<"ref = "<<ref <<"\na = "<<a<<endl;
    cout<<endl;
    
    increment_num(&a); // pass by address
    cout<<"ref = "<<ref <<"\na = "<<a<<endl;
    
    increment_num(&ref);
    cout<<"ref = "<<ref <<"\na = "<<a<<endl;
    cout<<endl;
    
    increment_num1(a); // pass by reference
    cout<<"ref = "<<ref <<"\na = "<<a<<endl;
    increment_num1(ref);
    cout<<"ref = "<<ref <<"\na = "<<a<<endl;
}
