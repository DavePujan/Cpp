/*
see line number 35 where we have created array of 10 objects.
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of the employee is: " << id << endl;
    }
};

int main()
{
    /*Employee harry, rohan, lovish, shruti;
    harry.setId();
    harry.getId();
    */

    // if number of employees are more, then we can create an array for this same process. like this,

    Employee fb[10];
    for (int i = 0; i < 10; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}



/*
Theory:

Array of Objects
Definition: An array of objects is simply an array where each element is an instance of a class. This allows you to manage multiple objects easily.

Declaration:
    int main() {
        MyClass objects[5]; // Array of 5 MyClass objects
        for (int i = 0; i < 5; i++) {
            objects[i].display(); // Calling method on each object
        }
        return 0;
    }

    
*/