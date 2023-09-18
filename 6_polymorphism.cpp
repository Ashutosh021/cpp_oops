#include <iostream>
using namespace std;

class findarea
{
public:
    void area(int r)
    {
        cout << "\nCircle :- " << (3.14 * r * r);
    }
    void area(int l, int b)
    {
        cout << "\nReact :- " << (2 * (l + b));
    }
    void area(int l, int b, int h)
    {

        cout << "\ncube :- " << ( l * b *h);
    }
};

class findarea2:public findarea{
    public:
    void area(int m){
        cout<< "\narea 2 "<<m*m;
    }
};
int main()
{
    // compile time polymorphism
    findarea ar;
    ar.area(4);
    ar.area(4,5);
    ar.area(4,8,3);

    // run time polymorphism
    findarea2 ar2;
    ar2.area(5);
    return 0;
}