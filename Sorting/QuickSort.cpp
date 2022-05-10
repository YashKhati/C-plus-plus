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
int partiton(int ar[],int l,int h)
{
    int pivot=ar[h];
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(ar[j]<pivot)
        {
            i++;
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[i+1],ar[h]);
    return i+1;
}

void QuickSort(int ar[],int l ,int h)
{
    if(l<h)
    {
        int p=partiton(ar,l,h);
        QuickSort(ar,l,p-1);
        QuickSort(ar,p+1,h);
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
    QuickSort(ar,0,s-1);
    cout<<"\n\n";
    cout<<"Array After Sorting "<<endl;
    PrintArr(ar,s);
}