#include<iostream>
using namespace std;

int ispalindrome(int n)
{
	int rev=0;
	int temp=n;
	while(n>0)
	{
		int r;
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	if(rev==temp)
	cout<<temp<<" is a palindrome";
	else
	cout<<temp<<" is not a palindrome";
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	ispalindrome(n);
}
