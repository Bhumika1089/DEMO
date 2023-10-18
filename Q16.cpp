#include<iostream>
using namespace std;

void prime(int n)
{
	cout<<"Prime number from 1 to "<<n<<" are: ";
	for(int j=2;j<=n;j++)
	{
	    int flag=1;
		for(int i=2;i<j;i++)
		{
			if(j%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<j<<" ";
}
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	prime(n);
}
