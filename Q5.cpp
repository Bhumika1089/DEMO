#include<iostream>
using namespace std;

void div(int n)
{
	if(n%5==0 && n%7==0)
	cout<<"Number is divisible by 5 and 7";
	else
	cout<<"Number is not divisible by 5 and 7";
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	div(n);
}
