#include<iostream>
using namespace std;

class first{

    public:
    int a;
    int b;

// default 
    first(){
        a=10;
        b=20;
        cout<<a+b;
    }
// parametrized
    first(int c,int d){
        a=c;
        b=d;
        cout<<a+b;
    }
    first(int c,int d,int e){
        cout<<c+d+e;
    }

    // destructor called
    ~first(){
        cout<<"\ndesc";
    }
};

int main()
{
    first ft;
    first ft1(15,25);
    first ft2(15,25,89);
    return 0;
}