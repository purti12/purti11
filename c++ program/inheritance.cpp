#include <iostream>
using namespace std;
class base
{
private:
    int a, b;

public:
    void get()
    {
        cout << "\nenter 2 num";
        cin >> a >> b;
    }
    void show()
    {
        cout << "A" << a;
        cout << "B" << b;
    }
};
class derived : public base
{

public:
    void display()
    {
        get();
        show();
        cout << "\ncall of base value";
    }
};
int main()
{
    derived d;
    d.get();
    d.show();
}
