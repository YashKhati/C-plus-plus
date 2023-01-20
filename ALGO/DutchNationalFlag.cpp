

//Given an array consisting of only 0s, 1s and 2s, sort the array


#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low =0;
    int mid =0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid],arr[high]);
            high--;
            
        }
        else
        {
            mid++;
        }
    }
}
