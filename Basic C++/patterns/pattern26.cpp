#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << "  ";
            space = space + 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j = j + 1;
        }
        int start = i - 1;
        while (start)
        {
            cout << start << " ";
            start = start - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}