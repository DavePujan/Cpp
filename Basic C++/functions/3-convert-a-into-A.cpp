#include <iostream>
using namespace std;

char convert(char name){
    char next = name - 'a' + 'A';
    return next;
    }

int main()
{
    char x;
    cin>>x;

    cout<<convert(x);
    return 0;
}