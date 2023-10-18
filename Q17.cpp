#include<iostream>
#include<cmath>
using namespace std;

void arm(int &n)
{
	int sum=0;
	int temp=n;
	int b=n;
	int a=0,r;

    while(n>0)
	{
		r=n%10;
		n=n/10;
		a++;
	}
	
	while(b>0)
	{ 
		r=b%10;
		b=b/10;
		int c=1;
		for(int i=0;i<a;i++)
		{ 
		c=c*r;
		}
		sum=sum+c;
	}
	if(temp==sum){
		cout<<temp<<" is Armstrong";
	}
	else
	cout<<temp<<" is not Armstrong";
}

int main(){
	int n,a;
	cout<<"Enter a number: ";
	cin>>n;
	arm(n);
}
