#include<iostream>
using namespace std;
int add(int a,int b)
{
	int sum;
	sum = a+b;
	return sum;
}
int main()
{
	int a,b,c;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	c=add(a,b);
	cout<<"Sum is: "<<c;
}
