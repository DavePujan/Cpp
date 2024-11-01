/*
-It represents a dynamic array that can grow and shrink in size as needed, allowing for efficient management of collections of elements.

-Key Features of vector
    Dynamic Size
    Contiguous Storage
    Automatic Memory Management
    Template-Based: std::vector is a template class, meaning it can hold elements of any data type.
*/

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" "; 
        // or you can use at from STL.
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main()
{
    vector<int> vec1; // zero length integer vector
    int element,size;
    cout<<"Enter the size of vector: "<<endl;
    cin>>size;
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);

    // vec1.pop_back();
    // cout<<"Vector after popping: ";
    // display(vec1);


    vector <int> :: iterator iter = vec1.begin(); //by this our iterator will be pointed to the first element of the vector.
    vec1.insert(iter , 566); // to use insert we have to create iterator. which is done in above line.
    //vec1.insert(iter,5 , 566); //it will insert 5 copies of 566 at begin of our vectors.
    display(vec1);


    vector<char> vec2(4); //4 element char vector
    vec2.push_back(5);
    display(vec2);


    vector<char> vec3(vec2); // 4 element char vector from vec2
    display(vec3);


    vector<int> vec4(6,3); // 6 element vector of 3s (andar 6 vakhat 3 hase...)
    display(vec4);


    return 0;
}


/*
Theory:

Basic Operations
Here are some common operations you can perform with std::vector:

-Creation: You can create a vector by specifying the type of elements it will hold.
    #include <vector>

    std::vector<int> numbers; // Creates an empty vector of integers

-Initialization: You can initialize a vector with a specific size or with a list of values.

    std::vector<int> nums(5); // Vector of size 5, initialized with zeros
    std::vector<int> values = {1, 2, 3, 4, 5}; // Vector initialized with values

-Adding Elements: Use push_back() to add elements at the end of the vector.

    numbers.push_back(10); // Adds 10 to the end of the vector

-Accessing Elements: You can access elements using the [] operator or the at() method.

    int first = numbers[0]; // Access first element
    int second = numbers.at(1); // Access second element

-Removing Elements: Use pop_back() to remove the last element or erase() to remove elements at specific positions.

    numbers.pop_back(); // Removes the last element

-Size and Capacity: You can check the current size and capacity of the vector.

    std::cout << "Size: " << numbers.size() << std::endl; // Current number of elements
    std::cout << "Capacity: " << numbers.capacity() << std::endl; // Allocated storage size

*/

// see this example to understand it easily:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create and initialize a vector
    vector<int> numbers = {10, 20, 30, 40};

    // Adding elements
    numbers.push_back(50); // Add 50 to the end

    // Accessing elements
    cout << "First element: " << numbers[0] << endl; // Output: 10
    cout << "Second element: " << numbers.at(1) << endl; // Output: 20

    // Size and capacity
    cout << "Size: " << numbers.size() << endl; // Output: 5
    cout << "Capacity: " << numbers.capacity() << endl; // Output: Depends on the implementation

    // Iterating through the vector
    cout << "Elements in the vector: ";
    for (int num : numbers) {
        cout << num << " "; // Output: 10 20 30 40 50
    }
    cout << endl;

    // Removing the last element
    numbers.pop_back();

    // Display after pop
    cout << "After pop_back: ";
    for (int num : numbers) {
        cout << num << " "; // Output: 10 20 30 40
    }
    cout << endl;

    // Erasing an element
    numbers.erase(numbers.begin() + 1); // Remove the second element

    // Display after erase
    cout << "After erase: ";
    for (int num : numbers) {
        cout << num << " "; // Output: 10 30 40
    }
    cout << endl;

    return 0;
}
