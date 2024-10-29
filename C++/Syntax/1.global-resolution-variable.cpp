#include <iostream>
using namespace std;

int c=45;

int main()
{
    int a=5,b=6;

    cout<<"this is c: "<< c << endl;

    cout<<"this is global c: "<<::c <<endl;

    return 0;
}