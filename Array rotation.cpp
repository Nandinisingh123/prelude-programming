#include <bits/stdc++.h>   //array rotation(right)
using namespace std;  
int main()
{
    int n,k,i;
    cin>>n;
    int arr[20],temp[20];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    for(i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
