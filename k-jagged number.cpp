#include<iostream>
using namespace std;

int prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int small_prime(int n)
{
	int small;
	for(int i=2;i<=n;i++)
	{
		int check=prime(i);
		if(check==1 && n%i==0)
		{
			small=i;
			return small;
		}
	}
}
int main()
{
	int k, n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Enter jagged number k: ";
	cin>>k;
	if(k<=small_prime(n))
	{
		cout<<n<<" is "<<k<<" jagged number";
	}
	else
	{
		cout<<n<<" is not"<<k<<" jagged number";
	}
}
