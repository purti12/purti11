#include <iostream>
using namespace std;
int main()
{ try
    { int i;
    cout<<"enter your age";
    cin>>i;
       if(i>=18)
       {
        cout<<"you can vote";
       }
       else
       {
        throw"access denied-you must be 18years old";
       }
    
    }
    catch(...)
    {
        cout<<"access denied-you must be 18years old";
    }
}