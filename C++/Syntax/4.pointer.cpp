#include <iostream>
using namespace std;

int main()
{
    // What is pointer? --> data type which holds the address of other data type

    int a=3;
    int* b = &a;
     // & --> address of operator
    cout<<"The address of a is "<<b<<end;
    cout<<"The address of a is "<<&a<<endl;


    // * --> (value at)dereference operator
    cout<<"The value st address b is "<<*b<<endl;

    //pointer to point variable (optional)
    int ** c = &b;
    cout << "The address of b is "<< &b<<endl;
    cout << "The address of b is "<< c <<endl;
    cout << "The value at address c is "<< *c <<endl;
    cout << "The value at address value_at(value_at(c)) is "<< **c <<endl;
    return 0;
}