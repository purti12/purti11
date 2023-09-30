#include <iostream>
using namespace std;
int main()
{ 
    try
    {
         int marks,n;
         cout<<"enter your BE percentage";
         cin>>marks;
         cout<<"enter your c-cat marks";
         cin>>n; 
         if(marks>=50 && n<=2000 )
         cout<<"centre allocated";
         else
         {
            throw"please reattempt exam";
         }
    }
    catch(...)
    {
        cerr<<"please reattempt exam";
    }
}