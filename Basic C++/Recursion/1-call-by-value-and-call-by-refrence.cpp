#include <iostream>
using namespace std;

void callByValue(string s){
    s[0]= 's';
    cout << s<<" ";
}

void callByReference(string &s){
    s[0]= 'l';
    cout << s<<" ";
}

int main()
{
    string s = "fuck";
    callByValue(s);
    cout<< s<< endl; //remains same as fuck,not become suck
    callByReference(s); 
    cout<< s; //changed (output is luck)
    return 0;
}