#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    cout << a << endl;
    char b = 'i';
    cout << b << endl;

    bool c = true;
    cout << c << endl;

    float d = 1.5;
    cout << d << endl;

    double e = 1.0405;
    cout << e << endl;

    int sizeOfInt = sizeof(a) , sizeOfChar = sizeof(b), sizeOfFloat = sizeof(d), sizeOfDouble = sizeof(e);
    cout << "int size " << sizeOfInt << " bytes" << endl;
    cout << "char size " << sizeOfChar << " bytes" << endl;
    cout << "float size " << sizeOfFloat<< " bytes" << endl;
    cout << "double size " << sizeOfDouble << " bytes" << endl;
    return 0;
}
