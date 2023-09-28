#include<iostream>
using namespace  std;
class account
{
private:
    string name;
    int acc;
    float balance;
public:
    void  getAccountDetails()
    {
        cout<<"\nEnter Customer Name : ";
        cin>>name;
        cout<<"Enter Account Number  : ";
        cin>>acc;
        cout<<" amount in account:";
        cin>>balance;
        z
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<acc;
        cout<<"/n balance is:"<<balance;
    }
};