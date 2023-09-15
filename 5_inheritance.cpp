#include <iostream>
using namespace std;

class a
{
public:
    void print1()
    {
        cout << "a";
    }
};

class b :public a{
    public :
        void print2(){
            cout << "b";
}
};

// class c : public b,public a   interit multiple class
class c : public b
{
public:
    void print3()
    {
        cout << "c";
    }
};

int main()
{
    c obj;
    obj.print1();
    obj.print2();
    obj.print3();
}