/* Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data member */
#include<iostream>
using namespace std;
class test
{
    private:
    string description;
    int testcode,centerReqd,noCandidate;
    int calcntr(int)
    {
    centerReqd=(noCandidate/100+1);
    return centerReqd;
    }
    public:
 void SCHEDULE()
 {
    cout<<"\nenter code";
    cin>>testcode;
    cout<<"\ndiscribtion about player";
    cin>>description;
    cout<<"\nenter number of noCandidate ";
    cin>>noCandidate;
    centerReqd=calcntr(noCandidate);

 }
 void DISPTEST()
 {
    cout<<"\ncode is="<<testcode;
    cout<<"\nplayer is"<<description;
    cout<<"\nnumber of candidate is="<<noCandidate;
    cout<<"\ncentres required are="<<centerReqd;
 }
};
main()
{
    test t;
  t.SCHEDULE();
  t.DISPTEST();
}
