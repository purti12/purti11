/* Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following
criteria
 Distance Fuel
 <=1000 500
 more than 1000 and <=2000 1100
 more than 2000 2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number,
Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members */
#include<iostream>
using namespace std;
class airplane
{
    private:
   int flno;
   float dis,fuel;
   string desti;
   void CALFUEL()
{
    if(dis<=1000)
    {
        fuel=500;
    }
    else if(dis>1000 && dis<=2000 )
    {
      fuel =1100 ;
    }
    else if(dis>2000)
    {
        fuel =2200;
    }
    }
    public:
    void FEEDINFO()
    {
        cout<<"enter flight number";
        cin>>flno;
        cout<<"enter your destination";
        cin>>desti;
        cout<<"enter the distance";
        cin>>dis;
        CALFUEL();
    }
    void SHOWINFO()
{
    cout<<"\nflight number is="<<flno;
    cout<<" \nyour destination is="<<desti;
    cout<<"\nthe distance is="<<dis;
    cout<<"\nfuel required is="<<fuel;
}
};
main()
{
    airplane a;
    a.FEEDINFO();
    a.SHOWINFO();
}


        
        


