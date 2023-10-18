#include<iostream>
using namespace std;

void isvowel(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	cout<<ch<<" is vowel";
	else
	cout<<ch<<" is consonent";
}

int main()
{
	char ch;
	cout<<"Enter character: ";
	cin>>ch;
	isvowel(ch);
}
