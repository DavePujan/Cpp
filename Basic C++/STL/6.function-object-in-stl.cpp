/*
function Objects (functor): function wrapped in a class so that it available like an object
*/

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 73, 4, 2, 54, 77};
    sort(arr, arr+6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    sort(arr, arr+6,greater<int>());  //sort in decending order

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}




/*
Theory:

function object (or functor) is an object that can be used as if it were a function. This is accomplished by overloading the operator(), which allows an instance of a class to be called like a function. Functors are widely used in the C++ Standard Template Library (STL), especially with algorithms and containers.

Key Features of Functors:
    Stateful: Unlike regular functions, functors can maintain state across multiple calls. This means they can have member variables that hold data relevant to their operations.

    Custom Behavior: You can define complex behavior by encapsulating logic within a class, allowing you to create more sophisticated operations compared to simple function pointers.

    Performance: Functors can be more efficient than function pointers because they can be inlined by the compiler, leading to optimized performance in some cases.
*/


//try to understand this code.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Adder {
public:
    Adder(int value) : value(value) {}

    // Overload operator() to make the object callable
    int operator()(int x) const {
        return x + value;
    }

private:
    int value; // State maintained by the functor
};

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Create a functor to add 10 to each element
    Adder addTen(10);

    // Use std::transform with the functor
    vector<int> results;
    transform(numbers.begin(), numbers.end(), back_inserter(results), addTen);

    // Display the results
    for (int num : results) {
        cout << num << " "; // Output: 11 12 13 14 15
    }
    cout << endl;

    return 0;
}
