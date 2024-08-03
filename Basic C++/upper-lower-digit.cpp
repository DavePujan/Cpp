#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a>='A' && a<='Z'){
        cout << "a is in uppercase" << endl;
    }
    else if (a>='a' && a<='z'){
        cout<< "a is in lowercase" << endl;
    }
    else if (a>='0' && a<='9'){
        cout << "a is digit" << endl;
    }
    else{
        cout << "try again" << endl;
    }
    return 0;
}