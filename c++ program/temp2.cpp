#include<iostream>
using namespace std;
template<class t1,class t2>
t1 larger(t1 x,t2 y) 
{
    return(x>y?x:y);
}
int main()
{
    int a=50;
    float b=67.78;
    cout<<larger(a,b)<<endl;
}