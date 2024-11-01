/*
-jo apde id and count private ma declare kari nakhya badha object mate, 

-toh apde jetla object banavsu e badha object mate id ane count alag alag hase, 

-etle jo apde object banavta javu hoi ane e mujab count ne increase karvu hoi to no kari saki karan ke badha object mate count alag alag chhe 

-etle ena mate apde static member no upyog karisu jethi apde badha object mate e static member(count) no upyog karvo hoi to kari sakisu.

-declare karvano pela toh private ma: static int count karine. (by default e 0 thi initialise thai)
- pachhi ene class ni bar memory apvani int empoyee:: count;

-->what is static function? 
    -static function e hoi jema tame only static memebers no upyog kari ne function create kar je badha objects mate upyog kari sakai.
    -ane ene tame direct class na name thi pan main ma access kari sako means ene koi obj ni bhi jarur na pade.(with scope resolution only)
*/

#include <iostream>
using namespace std;

class Employee {
    int id;
    //Count is static data member of class Employee
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id: ";
            cin>>id;
            count++;
            cout<<endl;
        }
        void getData(void){
            cout<<"The id of this employee is: "<<id<<" and this is employee number: "<<count<<endl;
        }

        static void getCount(void){
            cout<<id; //throw an error because we tried to access the non-static member in static function.
            cout<<"The count is: "<<count<<endl;
        }
};

int Employee:: count; //default value is zero
// int Employee:: count =100; //if you want to start it from 100 do like this.

int main()
{
    Employee harry,rohan,lavish;
    // harry.id = 1;  // can't do this because both are private.
    // harry.count =1;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lavish.setData();
    lavish.getData();
    Employee::getCount(); // this is direct use of static function via scope resolution.
    return 0;
}






/*
Some theory:

Definition: Static data members are shared among all instances of a class. There is only one copy of the static member, regardless of how many objects of the class are created.

Declaration:
    class MyClass {
    public:
    static int staticVar; // Declaration
    };

    // Definition outside the class
    int MyClass::staticVar = 0;

Access:
    int MyClass::staticVar = 5; // Accessing via class name

    MyClass obj;
    obj.staticVar = 10; // Accessing via object




Static Methods

Definition: Static methods belong to the class rather than any specific object. They can only access static data members or other static methods of the class.

Declaration:
    class MyClass {
    public:
        static void staticMethod() {
             // Method implementation
             }
    };

Access:
    MyClass::staticMethod(); // Accessing via class name

    MyClass obj;
    obj.staticMethod(); // Accessing via object (not recommended)

*/