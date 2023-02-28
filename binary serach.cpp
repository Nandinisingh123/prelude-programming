#include<iostream>    //binary search of array
using namespace std;
int binary(int arr[],int n,int key)
{
    int beg=0;
    int end=n-1;
    int mid=(beg+end)/2;
    while (beg<=end)
    {
        if(arr[mid]==key)   //key is equal to middle no.
        {
            return mid;
        }
        if(arr[mid]<key)    //right part of array beginning will change
        {
            beg= mid+1;
        }
        else
        {
            end= mid-1;   //arr[mid]>key left part and end will change
        }
        mid=(beg+end)/2;
    }
    
    return -1;
}
int main()
{
    int n,key,arr[20];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    int bs = binary(arr,n,key);
    cout<<"The index is = "<<bs;
    return 0;
}
