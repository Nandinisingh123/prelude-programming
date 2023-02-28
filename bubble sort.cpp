#include<iostream>    //bubblesort
using namespace std;
void bubble(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < n;i++) {
            cout << "  " << arr[i];
            }
}
int main()
{
    int a[5]={5,8,1,2,7};
    bubble(a,5);
    return 0;
}

