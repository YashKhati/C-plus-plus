#include<iostream>
using namespace std;
void PrintArr(int ar[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<ar[i]<<" "; 
    }
    cout<<endl;
}

void InsertionSort(int ar[], int s)
{
    for(int i=1 ; i< s ; i++)
    {
        int key=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>key)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;
        cout<<"Array after itteration "<<i<<endl;
        PrintArr(ar,s);
    }    
}

int main()
{
    int s;
    cout<<"Enter size of array : ";
    cin>>s;
    int ar[s];
    cout<<"Enter Array elements  "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>ar[i];
    }
    InsertionSort(ar,s);
    cout<<"\n\n";
    cout<<"Array After Sorting "<<endl;
    PrintArr(ar,s);
}
