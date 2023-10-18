#include<iostream>
using namespace std;

int nreverse(int &n)
{
	int r;
	int rev=0;
	while(n>0)
	{   
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	return rev;
}

int main(){
	int n,r;
	cout<<"Enter a number: ";
	cin>>n;
	int temp=n;
	r=nreverse(n);
	cout<<"Reverse of "<<temp<<" is: "<<r;
}
