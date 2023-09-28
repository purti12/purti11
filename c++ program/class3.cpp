/* // bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula –
 batavg =runs/(innings-notout)
calcavg() Function to compute batavg
Public members:
readdata() Function to accept value from bcode, name, innings, notout
and invoke the function calcavg()
displaydata() Function to display the data members */
#include<iostream>
using namespace std;
class batsman
{ 
    private:
    int bcode,innings,notout,runs;
    char bname[20];
    float batavg;
    float calcavg( int,int,int)
    {
     batavg =runs/(innings-notout);
     return batavg;
    }
    public:
    void readdata()
    {
         menu: cout<<"enter 4 digit code of batsman";
        cin>>bcode;
        if(bcode>1000 && bcode<9999)
        {
        }
        else{
            cout<<"invalid number..enter 4 digit number";
            goto menu;
        }
        cout<<"\nenter batsman name=";
        cin>>bname;
        cout<<"\nenter players inning,runs,notout";
        cin>>innings>>runs>>notout;
        batavg= calcavg( innings,runs,notout);
    }
    void displaydata()
    {
       cout<<"\nplayer name is="<<bname;
        cout<<"\ncode is="<<bcode;
        cout<<"\ninnings of player is="<<innings<<"notout"<<runs<<"batsman runs is="<<notout;
        cout<<"\naverageis="<<batavg;
    }
};
main()
{
    batsman b;
    b.readdata();
    b.displaydata();

}
       

