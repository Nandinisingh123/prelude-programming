#include <bits/stdc++.h>   //gcd (Euclidean method)
using namespace std;

int gcd(int a,int b)
{
	if (a==0)
	return b;
	if (b==0)
	return a;
	else
	return gcd(b%a,a);
  
}
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	int res= gcd(num1,num2);
	cout<<res;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//finding gcd using brute force or using prime factors
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,i,j,k,hcf=1;
   cout<<"enter the numbers whose gcd is to be found\n";
   cin>>a>>b;
   int temp1=a;
   int temp2=b;
   vector<int> arr;
   vector<int> brr;
   int c=2;
   while(a>1)
   {
      if(a%c==0)
      {
         arr.push_back(c);
         a/=c;
      }
      else c++;
   }
   int d=2;
   while(b>1)
   {
     if(b%d==0)
     {
        brr.push_back(d);
       b/=d;
     }
     else d++;
    }
cout<<"the prime factors of "<<temp1<<" are ";
    for(i=0;i<arr.size();i++)
    {cout<<arr[i]<<" ";}
cout<<"\nthe prime factors of "<<temp2<<" are ";
    for(i=0;i<brr.size();i++)
    {cout<<brr[i]<<" ";}
sort(arr.begin(),arr.end());
sort(brr.begin(),brr.end());
vector<int> final;
i=0;j=0;
    while(i<arr.size() && j<brr.size())
   {if(arr[i]==brr[j])
      {
     hcf *=arr[i];
     i++;
     j++;
   }
     else if(arr[i]<brr[j])
   {
      i++;
    }
    else
    {
      j++;
    }
   }
cout <<"\nThe gcd of given numbers using prime factors is " <<hcf << endl;
}
