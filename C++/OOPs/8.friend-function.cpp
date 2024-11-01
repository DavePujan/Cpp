/*
friend function will give some permisions to use the things of the given function.

but you can't say that this friend is a member of our class.

see line number 27 where class is used.
*/

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your number is " << a << " +" << b << "i" << endl;
    }

    friend complex sumComplex(complex o1, complex o2);
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    // this sumcomplex function will not become the member function of this class, means we can't use this function for the objects of this class like this...
    c1.sumComplex(c1,c2); // this will throw error that complex has no member sumComplex.
    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}




/*
Theory: 

friend function is a special function that is allowed to access the private and protected members of a class. 

Key Characteristics of Friend Functions
    -Not Member Functions: Friend functions are not part of the class and do not have the this pointer. They are declared outside the class.

    -Access to Private Members: They can access both private and protected members of the class in which they are declared as a friend.

    -Non-Restrictive: Friendship is not reciprocal. If class A declares class B’s function as a friend, class B does not automatically grant access to class A’s members.

    -Defined Once: You define a friend function only once, and it can be used with any instance of the class.

Properties of friend function
    1. Not in the scope of class
    2. Since it is not in the scope of the classs, it cannot be called from the object of that class. means c1.sumComplex(); is invalid
    3. Can be invoked without the help of any object.
    4. Usually contains the objects as argument. means arguments of friend class is (complex o1, complex o2) like this. 
    5. Can be declared inside public or private section of the class.
    6.It cannot access the member directly by their names and need object_name.member_name to access any member. means you can not write directly like cout<<a , but for this you have to write like this cout<<o1.a or o1.b.


Syntax: 
    
    class Rectangle {
    public:
        // Declare the function to calculate area as a friend
        friend int calculateArea(Rectangle rect);
    };

    // Definition of the friend function
    int calculateArea(Rectangle rect) {
        return rect.width * rect.height; // Accessing private members
    }

    int main() {
        Rectangle rect;          // Create a Rectangle object
        rect.setWidth(5);       // Set width to 5
        rect.setHeight(10);     // Set height to 10
        
        // Call the friend function to calculate the area
        int area = calculateArea(rect);
        
        // Display the area
        cout << "Area of the rectangle: " << area << endl; // Outputs: Area of the rectangle: 50
    }



Use Cases
    -Operator Overloading: Friend functions are often used in operator overloading when you want to define operators outside the class.

    -Access Control: Friend functions can be helpful when you want to implement functions that need access to private data without making them members of the class.

    -Inter-Class Communication: They can facilitate interactions between classes without creating a tight coupling.
*/

// see this simple example to understand the topic easily:

#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;  // Width of the rectangle
    int height; // Height of the rectangle

public:
    // Method to set the width
    void setWidth(int w) {
        width = w;
    }

    // Method to set the height
    void setHeight(int h) {
        height = h;
    }

    // Declare the function to calculate area as a friend
    friend int calculateArea(Rectangle rect);
};

// Definition of the friend function
int calculateArea(Rectangle rect) {
    return rect.width * rect.height; // Accessing private members
}

int main() {
    Rectangle rect;          // Create a Rectangle object
    rect.setWidth(5);       // Set width to 5
    rect.setHeight(10);     // Set height to 10
    
    // Call the friend function to calculate the area
    int area = calculateArea(rect);
    
    // Display the area
    cout << "Area of the rectangle: " << area << endl; // Outputs: Area of the rectangle: 50
    
    return 0;
}
