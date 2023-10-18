#include<iostream>
using namespace std;
int main()
{
	int n,q;
	float price=0;
	char size,cheese;
	cout<<"-------------MENU----------------\n\n";
	cout<<"1. Onion Pizza\n2. Corn Pizza\n3. Capsicum Pizza\n\n";
do{
	cout<<"\nPlease enter your choice: ";
	cin>>n;	
	switch(n)
	{
		case 1:
			{
				cout<<"\nEnter Size of your pizza(s/m/l): ";
				cin>>size;
				
				if(size=='s')
				price+=75;
				else if(size=='m')
				price+=92;
				else if(size=='l')
				price+=117;
				
				cout<<"\nWould you like to add extra cheese(Y/N)? ";
				cin>>cheese;
				
				if(cheese=='y'||cheese=='Y')
				price+=15;
				
				cout<<"\n";
				
				break;
			}
		case 2:
			{
				cout<<"\nEnter Size of your pizza(s/m/l): ";
				cin>>size;
				
				if(size=='s')
				price+=87;
				else if(size=='m')
				price+=103;
				else if(size=='l')
				price+=127;
				
				cout<<"\nWould you like to add extra cheese(Y/N)? ";
				cin>>cheese;
				
				if(cheese=='y'||cheese=='Y')
				price+=15;
				
				cout<<"\n";
				
				break;
			}
		case 3:
			{
				cout<<"\nEnter Size of your pizza(s/m/l): ";
				cin>>size;
				
				if(size=='s')
				price+=79;
				else if(size=='m')
				price+=98;
				else if(size=='l')
				price+=122;
				
				cout<<"\nWould you like to add extra cheese(Y/N)? ";
				cin>>cheese;
				
				if(cheese=='y'||cheese=='Y')
				price+=15;
				
				cout<<"\n";
				
				break;
		}
		case 4:
			{
				cout<<"Thank you for visiting our pizza corner :)\n\n";
				break;
			}
		default:
			{
				cout<<"Enter valid choice";
				
				break;
			}
	}
}while(n!=4);

	if(price>299&&price<=599)
	{
		cout<<"\n\nTotal discount of your order is-> "<<price*0.1;
		price=price-price*0.1;
    }
	else if(price>599)
	{
		cout<<"\n\nTotal discount of your order is-> "<<price*0.15;
	    price=price-price*0.15;
    }
	cout<<"\n\nTotal amount to pay: "<<price;
}
