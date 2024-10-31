#include<iostream>
using namespace std;
int main()

{
	int ticketPrice = 15;
	int IcecreamPrice = 5;
	int numUsers;
	cout<<"How many people are attending the event? (Maximum 10): ";
	cin>>numUsers;
	
	if(numUsers>10)
	{
		cout<<"Error: Not more users allowed. "<<endl;
		return 1;
	}
	
	string userNames[10];
	int totalCost=0;
	for(int i=0; i<numUsers; ++i)
	{cout<<"Enter name for the user "<<i+1<<":";
	cin>>userNames[i];
	
	int userCost=ticketPrice + IcecreamPrice;
	totalCost+=userCost;
	cout<<userNames[i]<<": Ticket Cost: $"<<ticketPrice<<", Icecream Cost: $"<<IcecreamPrice<<", Total Cost: $"<<userCost<<endl;
	}
	
	cout<<"\nUser names for event"<<endl;
	for(int i=0;i<numUsers; i++)
	{cout<<"User "<<i+1<<": "<<userNames[i]<<endl;
	}
	
	cout<<"Total Cost  for all Users: $"<<totalCost<<endl;
	return 0;
}

