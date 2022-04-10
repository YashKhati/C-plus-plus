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

void BubbleSort(int ar[], int s)
{
    for(int i=0 ; i< s-1 ; i++)
    {
        cout<<i+1<<" pass "<<endl;
        for(int j=0;j<s-i-1;j++)
        {
            if(ar[j+1]<ar[j])
            {
                swap(ar[j],ar[j+1]);
            }
            cout<<"step "<<j+1<<endl;
            PrintArr(ar,s);   
        }
        cout<<"After Pass "<<i+1<<endl;
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
    BubbleSort(ar,s);
    cout<<"\n\n";
    cout<<"Array After Sorting "<<endl;
    PrintArr(ar,s);
}
