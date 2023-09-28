#include<iostream>
using namespace std;
void doit(int*num)
{
    *num=*num*2;
}
 main()
{
    int no=6;
    doit(&no);
    cout<<"\nvalue of no"<<no;
}