#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    int count = 1;
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
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}