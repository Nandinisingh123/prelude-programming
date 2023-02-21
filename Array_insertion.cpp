#include <bits/stdc++.h>   //array insertion on a specific location
#include <string.h>
using namespace std;  
int main()
{
    int n,ele,pos;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>ele;
    cin>>pos;
    if(n>20)
    { 
        cout<<"overflow";
    }
    else
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
} 
