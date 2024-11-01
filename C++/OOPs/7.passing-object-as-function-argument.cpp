/*
see line number 38 where we have passed an object as parameter of the c3 function.
*/

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1, b = v2;
    }

    void setDataBySum(complex o1, complex o2)  //here o1 is c1, and o2 is c2.
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber(){
        cout<<"Your complex number is "<<a<<" +"<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1,c2); // here we have passed c1 , c2 object as a function parameter in c3.
    c3.printNumber();

    return 0;
}



/*
Theory:

Passing Objects as Function Arguments
You can pass objects to functions in several ways: by value, by reference, or by pointer. Each method has its own implications.

-1. Passing by Value

    void displayObject(MyClass obj) {
        obj.display(); // Works on the copy
    }

    int main() {
        MyClass obj;
        displayObject(obj); // Passing by value
        return 0;
    }


-2. Passing by Reference

    void displayObject(MyClass &obj) {
        obj.display(); // Works on the original object
    }

    int main() {
        MyClass obj;
        displayObject(obj); // Passing by reference
        return 0;
    }


-3. Passing by Pointer

    void displayObject(MyClass *obj) {
        obj->display(); // Accessing member using pointer
    }

    int main() {
        MyClass obj;
        displayObject(&obj); // Passing the address of the object
        return 0;
    }

*/

