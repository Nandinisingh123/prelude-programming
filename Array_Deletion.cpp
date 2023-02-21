#include <bits/stdc++.h>   //array deletion
using namespace std;  
int main()
{
    int n,pos;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>pos;
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
} 


#include <bits/stdc++.h>   //array deletion by element
using namespace std;  
int main()
{
    int n,ele,i;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>ele;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==ele){
        for(int j=i;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        i--;
        n--;}
    }
 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
} 
