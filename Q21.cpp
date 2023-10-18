#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b;
	char op;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"\n-------------MENU----------------\n\n";
	cout<<"+ -> Addition\n- -> Subtraction\n* -> Multiplication\n/ -> Division\nPress E -> Exit\n\n";
	
do{
	cout<<"Enter operator: ";
	cin>>op;
	switch(op)
	{
		case '+': cout<<"Addition: "<<a+b<<endl<<endl;
		break;
		case '-': cout<<"Subtraction: "<<abs(a-b)<<endl<<endl;
		break;
		case '*': cout<<"Multiplication: "<<a*b<<endl<<endl;
		break;
		case '/': cout<<"Division: "<<a/b<<endl<<endl;
		break;
		case 'E': break;
		default: cout<<"Enter valid operator"<<endl<<endl;
		break;
	}
}while(op!='E');
}
