#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int i=1;
    for(;;){
        if(i<=n){
            cout<< i << " ";
        }
        else{
            break;
        }
        i++;
    }
    return 0;
}