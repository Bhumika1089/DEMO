#include<iostream>
using namespace std;

void isprime(int n)
{
	int flag=0;
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			//break;
		}
	}
	if(flag==1)
	{
		cout<<n<<" is not prime";
	}
	else
	cout<<n<<" is prime";
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	isprime(n);
}
