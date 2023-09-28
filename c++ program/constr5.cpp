#include<iostream>
using namespace std;

class cashRegister
{
    private:
	int cashOnHand; 
    public:
	cashRegister(); 
	cashRegister(int cash); 
	int getCurrentBalance();	
	void acceptAmount(int amt);
};


class dispenserType
{
   private:
	int n_items;
	int cost; 
   public:
	dispenserType(); 
	dispenserType(int set_NItems, int setCost); 
	int getNItems();	
	int getCost();	
	void makeSale(); 

~dispenserType() {                             
        cout << "Dispenser destroyed." << endl;
    }};

cashRegister::cashRegister()
{
	cashOnHand = 500;
}

cashRegister::cashRegister(int cash)
{
	cashOnHand = cash;
}

int cashRegister::getCurrentBalance()
{
	return cashOnHand;
}

void cashRegister::acceptAmount(int amt)
{

	cashOnHand = cashOnHand + amt;
}

dispenserType::dispenserType()
{
	n_items = 50;
	cost = 50;
}

dispenserType::dispenserType(int set_NItems, int setCost)
{
	n_items = set_NItems;
	cost = setCost;
}

int dispenserType::getNItems()
{
	return n_items;
}

int dispenserType::getCost()
{
	return cost;
}

void dispenserType::makeSale()
{
	n_items--;
}

void showSelection();
void sellProduct(dispenserType& item, cashRegister& count);
int main()
{
	cashRegister counter;
	dispenserType Chocolate(70,170);
	dispenserType Strawberry(50, 99);
	dispenserType Blueberry(35, 89);
	dispenserType Orange(60, 59);
	int candy;
	showSelection();
	cin >> candy;
    while (candy != 5)
	{
		switch (candy)
		{
			case 1:
			cout<<"you have selected Chocolate"<<endl;
				sellProduct(Chocolate, counter);
				
				break;
			case 2:
			cout<<"you have selected Strawberry"<<endl;
				sellProduct(Strawberry, counter);
				break;
			case 3:
			cout<<"you have selected Blueberry"<<endl;
				sellProduct(Blueberry, counter);
				break;
			case 4:
			cout<<"you have selected Orange"<<endl;
				sellProduct(Orange, counter);
				break;
			default:
				cout << "Invalid selection." << endl;
		}
		showSelection();
		cin >>candy;
	}	
	return 0;
}