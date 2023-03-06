//to find the prime factors
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num;
   cin>>num;
   int c=2;
   while(num>1)
   {
      if(num%c==0){
        cout<<c<<" ";
        num/=c;
        }
        else c++;
   }
}
