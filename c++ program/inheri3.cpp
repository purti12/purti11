#include <iostream>
using namespace std;
class number
{
protected:
    int n;

public:
    void get()
    {
        cout << "enter number";
        cin >> n;
    }
};
class square : public number
{
protected:
    int sqr;

public:
    void sqre()
    {
        sqr = n * n;
        cout << "square is=" << sqr;
    }
};
class cube : public square
{
protected:
    int cubes;

public:
    void cub()
    {
        cubes = sqr * n;
        cout << "cube is=" << cubes;
    }
};
int main()
{
    cube c;
    c.get();
    c.sqre();
    c.cub();
}
