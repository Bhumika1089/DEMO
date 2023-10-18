#include<iostream>
using namespace std;

void swapping(int &a,int &b)
{
	a=a*b;
	b=a/b;
	a=a/b;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Before swapping: "<<"a="<<a<<" b="<<b<<endl;
	swapping(a,b);
	cout<<"After swapping: "<<"a="<<a<<" b="<<b<<endl;
}
