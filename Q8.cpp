#include<iostream>
using namespace std;

void isvalid(int a1,int a2,int a3)
{
	if(a1+a2+a3==180&& a1>0&&a2>0&&a3>0)
	cout<<"The triangle is valid";
	else
	cout<<"The triangle is not valid";
}

int main()
{
	int a1,a2,a3;
	cout<<"Enter sides of a triangle: ";
	cin>>a1>>a2>>a3;
	isvalid(a1,a2,a3);
}
