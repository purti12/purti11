#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream pu;
    pu.open("read.txt");
    pu<<"hello "<<endl<<"whats the plan"<<endl;
    pu.close();
    cout<<"file is created";

}
