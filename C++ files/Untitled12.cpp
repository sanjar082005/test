#include <iostream>
using namespace std;
int amount,op;
double balance=500;

void displayMenu(){
	cout<<"       menu           "<<endl;
	cout<<"1. balance"<<endl;
	cout<<"2. pul qosh"<<endl;
	cout<<"3. pul ayir"<<endl;
	cout<<"4. yo'qol"<<endl;
	
}
int maina(){
	displayMenu();
	cout<<"tanla tvar";
	cin>>op;
  switch(op){
	case 1:
		cout<<"sizda"<<balance;
			break;
			
	case 2:
		cout<<"qancha qo'shmoqchisan tvar";
		cin>>amount;
		cout<<"sizni puliz"<<balance+amount<<"buldi";
	case 3:
		cout<<"qancha pul olasan: ";
		cin>>amount;
		if(amount<balance){
			cout<<"sizni puliz"<<balance-amount<<endl;
				break;
		}	
	case 4:
	  exit(0);
	  			
   }	
	
	
	
return 0;}	
	
	
	
	
	
	
	
	
	
	
