//3.A program to read a file.
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
char str[20];
int a;
ifstream obj("demo.txt");
obj>>str>>a;
cout<<str<<endl<<a;
}
