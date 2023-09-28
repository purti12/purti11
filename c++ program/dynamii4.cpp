#include<iostream>
using namespace std;
class Sample
{
private:
int x; float y;
public:
void getdata();
void display();
};
inline void Sample::getdata()
{
cout<<"\n\n\n\nEnter an integer value\n";
cin>>x;
cout<<"\n\nEnter a floating point value\n";
cin>>y;
}
inline void Sample::display()
{
cout<<"\n\n\n\nEntered numbers are\n";
cout<<"X = "<<x<<"\t"<<"Y= "<<y<<endl;
}
int main()
{
Sample *ptr; // Sample *ptr = new Sample();
ptr=new Sample;
ptr->getdata();
ptr->display();
delete ptr;
}