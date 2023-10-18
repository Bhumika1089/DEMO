#include<iostream>
using namespace std;

void ismax(int n1,int n2,int n3)
{
	if(n1>n2)
	{
		if(n1>n3)
		cout<<n1<<" is greatest";
		else
		cout<<n3<<" is greatest";
	}
	else if(n2>n3)
		cout<<n2<<" is greatest";
	else
		cout<<n3<<" is greatest";
}
int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;
	ismax(n1,n2,n3);
}
