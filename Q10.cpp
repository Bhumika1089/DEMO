#include<iostream>
using namespace std;

int power(int n,int m)
{
	int p=1;
	for(int i=1;i<=m;i++)
	{
		p*=n;
	}
	return p;
}

int main()
{
	int n,m,p;
	cout<<"Enter number and its power: ";
	cin>>n>>m;
	p=power(n,m);
	cout<<n<<" to the power "<<m<<" is: "<<p;
}
