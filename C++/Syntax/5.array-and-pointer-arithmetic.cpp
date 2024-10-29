#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 78;
    mathMarks[1] = 7;
    mathMarks[2] = 75;
    mathMarks[3] = 76;

    cout << "These are math marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // You can change the value of array by its index
    marks[1] = 49;
    cout << "These are marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // pointers and arrays
    int *p = marks;
    cout << "The value of marks[0] " << *p << endl; // here p store the value of first index of our array.
    cout << "The value of marks[1] " << *(p + 1) << endl;
    cout << "The value of marks[2] " << *(p + 2) << endl;
    cout << "The value of marks[3] " << *(p + 3) << endl;

    // or you can print this array like this also:
    cout << "The value of marks[0] "<< *(p++) << endl;
    cout << "The value of marks[1] "<< *(p++) << endl;
    cout << "The value of marks[2] "<< *(p++) << endl;
    cout << "The value of marks[3] "<< *(p) << endl; 
    return 0;
}