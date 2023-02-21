#include <bits/stdc++.h>   //matrix multiplication
using namespace std;  
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[20][20],arr2[20][20],arr[20][20];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=0;
            for(int k=0;k<m;k++)
            {
                arr[i][j]+=arr1[i][k]*arr2[k][j];
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";  
    }


