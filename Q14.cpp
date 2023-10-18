#include<iostream>
using namespace std;

int s_even(int n)
{
	int sum1=0;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		sum1+=i;
	}
	return sum1;
}

int s_odd(int n)
{
	int sum2=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		sum2+=i;
	}
	return sum2;
}

int main()
{
	int n,s,e,o;
	cout<<"Enter number: ";
	cin>>n;
	e=s_even(n);
	o=s_odd(n);
	cout<<"sum of even number is: "<<e<<endl<<"sum of odd number is: "<<o;
}
