//2.To write data into file using open function
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ofstream obj;
obj.open("demo1.txt");
obj<<"Welcome"<<endl<<"This is IT Networkz";
obj.close();
cout<<"file is created";
}