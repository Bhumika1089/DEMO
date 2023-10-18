#include<iostream>
using namespace std;

int sum(int n)
{
	return n*(n+1)/2;
}

int main()
{
	int n,s;
	cout<<"Enter number: ";
	cin>>n;
	s=sum(n);
	cout<<"sum is: "<<s;
}
