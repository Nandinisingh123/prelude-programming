#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
         int min=i;
        {
           for(int j=i+1;j<n;j++)
           {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            if(min!=i)
            {
            swap(arr[min],arr[i]); 
            }
            }
        }
    }
     for(int i=0;i<n;i++)
          {
             cout<<arr[i]<<" ";
          }
}
int main()
{
   int a[5]={5,8,1,3,2};
   selectionsort(a,5);  
}
