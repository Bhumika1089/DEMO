#include<iostream>
using namespace std;

void iseven(int n)
{
	if(n%2==0)
	cout<<"Number is even";
	else
	cout<<"Number is odd";
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	iseven(n);
}
