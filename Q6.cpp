#include<iostream>
using namespace std;

float incometax(int sal)
{
	if(sal<=150000)
	{
		return 0;
	}
	else if(sal>150000&&sal<=300000)
	{
		return (sal-150000)*0.2;
	}
	else
	{
		return (sal-300000)*0.3+(300000-150000)*0.2;
	}
}

int main()
{
	int sal;
	float tax;
	cout<<"Enter salary: ";
	cin>>sal;
	tax=incometax(sal);
	cout<<"Total income tax: "<<tax;
}
