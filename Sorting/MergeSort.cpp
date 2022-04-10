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
void merge(int ar[],int l,int mid,int h)
{
    int c[h-l+1];
    int k=0,i=l,j=mid+1;
    while(i<=mid && j<=h)
    {
        if(ar[i]<=ar[j])
        {
            c[k++]=ar[i++];
        }
        else
        {
            c[k++]=ar[j++];
        }
    }
    while(j<=h)
    {
        c[k++]=ar[j++];
    }
    while(i<=mid)
    {
        c[k++]=ar[i++];
    }
    int t=0;
    for(i=l;i<=h;i++)
    {
        ar[i]=c[t];
        t++;
    }
}
void MergeSort(int ar[],int l ,int h)
{
    if(l<h)
    {
        int mid=l+(h-l)/2;
        MergeSort(ar,l,mid);
        MergeSort(ar,mid+1,h);
        merge(ar,l,mid,h);
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
    MergeSort(ar,0,s-1);
    cout<<"\n\n";
    cout<<"Array After Sorting "<<endl;
    PrintArr(ar,s);
}
