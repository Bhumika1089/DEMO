#include<iostream>
using namespace std;

int fact1(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact1(n-1);
}

int fact2(int n)
{
	int f=1;
	if(n==0||n==1)
	return 1;
	for(int i=2;i<=n;i++)
	{
		f=f*i;	
	}
	return f;
}

int main()
{
	int n,a,b;
	cout<<"Enter number: ";
	cin>>n;
	a=fact1(n);
	b=fact2(n);
	cout<<"Factorial of "<<n<<" using recursion is "<<a<<" and using for loop is "<<b;
}
