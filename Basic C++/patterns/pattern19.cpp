
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = ('A' + n- i +j -1) ;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}