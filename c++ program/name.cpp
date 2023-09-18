//wap where function is print and use it with different data type i.e functon overloading
#include<iostream>
using namespace std;
int print(int);
float print(float);
char print(char);
int main()
{
    int a;
    float b;
    char c;
    a= print(5);
    cout<<"\ninteger is"<<a;
    b= print(2.5f);
    cout<<"\nfloat is"<<b;
    c=print('p');
    cout<<"\nchar is"<<c;
}
int print(int x)
{ 
    return x;
}
float print(float y)
{
    return y;
}
char print (char z)
{
    return z;
}
