#include <iostream>
#include<array>
using namespace std;
void update(int* ptr)
{
   cout<<"Inside function Address of ptr = "<<&ptr<<endl;
   cout<<"Inside function ptr = "<<ptr<<endl ;                  // ptr inside update is not same as ptr in main though they contain  same address 
   ptr = ptr + 1;
   cout<<"Inside update function  ptr = "<<ptr<<endl;
}

void updateVal(int *ptr)
{
   *ptr=*ptr + 1;
}

int getSum(int arr[],int n)
{  
   cout<<"Size of arr inside function "<<sizeof(arr)<<endl;  // 8 = size of pointer arr not 40(size of whole array) 
    int sum=0;
   for(int i=0;i<n;i++)
   {
     sum+=arr[i];
   }
   return sum;
}
int main()
{
   int num=5;

	int *ptr=&num;
   
   cout<<"Address of ptr = "<<&ptr<<endl;
   cout<<"Before ptr =  "<<ptr<<endl;
   update(ptr);
   cout<<"After ptr =  "<<ptr<<endl;

   cout<<"\n\n";
   cout<<"Before update *ptr =  "<<*ptr<<endl;
   updateVal(ptr);   //update value in address stored in ptr by 1
   cout<<"After update *ptr =  "<<*ptr<<endl;
     
   cout<<"\n\n";
   int arr[5]={1,2,3,4,5};
   cout<<"Array size : "<<sizeof(arr)<<endl;
   cout<<"Sum of Array : "<<getSum(arr,5)<<endl;
}
