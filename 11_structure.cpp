#include <iostream>

using namespace std;

struct studentt
{
    // string name="";
    int roll;
}stu[10];



int main()
{
    string temp="";
    for(int i=0;i<10;i++){
        // cin>>temp;
        // stu.name[i]+=temp;
        cin>>stu->roll[i];
    }
    for(int i=0;i<10;i++){
    // cout<<"\n\n"<<stu.name[i];
    cout<<"\n"<<stu.roll[i];
    }
    return 0;
}