#include<iostream>
using namespace std;
// class is the example of encapsulation
class first{
    public:
        int a=10;
        int b=20;

    void getdata();
    {
        cin>>a;
        cin>>b;
    }

    void putdata(){
        cout<<a+b;
    }

    private:
    void pass(){
        cout<<"pass is ";
    }
};

int main(){

    first ft;
    // cout<<ft.a+ft.b;
    ft.getdata();
    ft.putdata();
    ft.pass();
    return 0;
}