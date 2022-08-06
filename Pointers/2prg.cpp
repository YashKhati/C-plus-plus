#include <iostream>
using namespace std;
int main()
{
	int arr[10];
   for(int i=0;i<10;i++)
   {
      arr[i]=i;
   }
   cout<<"Address of first index : "<<arr<<endl;
   cout<<"Address of first index : "<<&(arr[0])<<endl;
   
   
   cout<<"Value at index 0 : "<<*arr<<endl;
   cout<<"Value at index 0 : "<<arr[0]<<endl;
   cout<<"Value at index 3 : "<<*(arr+3)<<endl;
   cout<<"Value at index 3 : "<<arr[3]<<endl;

   cout<<"Value at index 3 : "<<3[arr]<<endl;                          
   cout<<"Value at index 3 : "<<*(3+arr)<<endl;
   

     cout<<"Sizeof(arr) : "<<sizeof(arr)<<endl;
     cout<<"Sizeof(*arr) : "<<sizeof(*arr)<<endl;
     cout<<"Sizeof(&arr) : "<<sizeof(&arr)<<endl;
     cout<<"Address : "<<&arr[0]<<endl;


     int *ptr =arr;
     cout<<"Address : "<<&ptr<<endl;
     cout<<"Sizeof(ptr) : "<<sizeof(ptr)<<endl;
     cout<<"Sizeof(*ptr) : "<<sizeof(*ptr)<<endl;
     cout<<"Sizeof(&ptr) : "<<sizeof(&ptr)<<endl;

}
