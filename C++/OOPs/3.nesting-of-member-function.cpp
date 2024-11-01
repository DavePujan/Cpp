/*
    Nesting of member functions refers to the ability to call one member function from another within the same class.even if it was a private.

    -simply nesting matlab function ni andar function ne call karavu.

for nesting check line number 36.
*/

#include <iostream>
using namespace std;
#include <string>

class binary
{
    string s; //it is private by default
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << " Enter a binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin(); // this is called nesting of function, which will call chbin ffunction before executing one_compliment funvtion.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void binary::display(void)
{

    cout << "displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << "displaying your binary number " << endl;
        cout << s.at(i);
    }
    cout << " ";
}

int main()
{
    binary b;
    b.read();
    b.chk_bin(); // throw error because it was private.
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}