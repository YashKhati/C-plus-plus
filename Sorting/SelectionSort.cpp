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

void SelectionSort(int ar[], int s)
{
    for(int i=0 ; i< s-1 ; i++)
    {
        int min_index=i;
        for(int j=i+1;j< s;j++)
        {
            if(ar[min_index] > ar[j])
            {
                min_index = j;
            }
        }
        swap(ar[min_index],ar[i]);
        cout<<"array after itteration "<<i+1<<endl;
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
    SelectionSort(ar,s);
    cout<<"\n\n";
    cout<<"Array After Sorting "<<endl;
    PrintArr(ar,s);
}
