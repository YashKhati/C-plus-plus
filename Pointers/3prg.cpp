#include <iostream>
#include<array>
using namespace std;
int main()
{
	int arr[6]={0,1,2,3,4};
   char ch[6]={"abcde"};  
   
   cout<<"Address of 1st index of int array : "<<arr<<endl;
   cout<<"Address of 1st index of char array : "<<ch<<endl;     // prints entire string

  
   cout<<"Address of 1st index of int array : "<<&(arr[0])<<endl;
   cout<<"Address of 1st index of char array : "<<&(ch[0])<<endl;      // prints entire string

   char *cptr=&(ch[0]);
   cout<<"Address  in pointer : "<<cptr<<endl;

   char ch1[6] = {'a','b','c','d','e'};
   char *cptr2 = &(ch1[0]);
   cout<<"Address of 1st index of char array : "<<ch1<<endl;
   cout<<"Address  in pointer : "<<cptr2<<endl;
 
   char ch2='p';
   char *cptr3 = &ch2;
   cout<<"Address  in pointer : "<<cptr3<<endl;  
}
