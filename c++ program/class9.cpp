/* Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of copies 
where N is passed to the function as argument. 
Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOKTITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be 
purchased. It invokes TOTAL_COST() and prints the total cost to 
be paid by the user. 
Note : You are also required to give detailed function definitions. */
#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    char bt[20];
    float price;
    void TOTAL_COST(int n)
    {
        int total;
        total=price*n;
        cout<<"total price is"<<total;
    }
    public:
    void INPUT()
    {
       cout<<"\nenter book number";
       cin>>bookno;
       cout<<"enter book title";
       cin>>bt;
       cout<<"\nenter price of book=";
       cin>>price;
    }
    void PURCHASE()
    {
        int n;
       cout<<"enter number of copies";
       cin>>n;
       TOTAL_COST(n);
    }
};
main()
{
    book b;
    b.INPUT();
    b.PURCHASE();
}

  