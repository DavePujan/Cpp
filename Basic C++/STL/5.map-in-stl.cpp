/*
-->Map is an associative array,
-->The map is implemented as a balanced binary tree (typically a Red-Black tree), which keeps the elements sorted by their keys.
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["harry"] = 98; // harry is key and 98 is value
    marksMap["jack"] = 59;
    marksMap["harry"] = 8;

    map<string, int>::iterator iter;

    marksMap.insert({"Hinata", 162});

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second
             << "\n"; // here first will give the key and second will give value (harry = 98 : key =value)
    }

    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;

    return 0;
}

/*
Theory:

map is an associative container that stores elements as key-value pairs. Each key is unique, and it is used to access the corresponding value.

Key Features of map:
    Key-Value Pairs: Each element in a map is a pair consisting of a key and its associated value.

    Unique Keys: A map does not allow duplicate keys. If you try to insert a key that already exists, the insertion will not take place, and the existing value associated with that key will remain unchanged.

    Sorted Order: The keys in a map are sorted automatically, which allows for efficient retrieval.

    Logarithmic Time Complexity: Search, insertion, and deletion operations typically run in O(log n) time complexity due to the underlying tree structure.

    Iterators: You can traverse the elements in a map using iterators, and they will be in sorted order based on the keys.

Modifiers:
    insert(): Insert a key-value pair.
    erase(): Remove an element by key or iterator.
    clear(): Remove all elements.

Accessors:
    operator[]: Access or modify the value associated with a key (inserts a new key with a default value if it doesn't exist).
    at(): Access the value associated with a key (throws an exception if the key does not exist).
    find(): Return an iterator to the element with the specified key, or end() if not found.
    count(): Return the number of elements with the specified key (should be 0 or 1 for a map).
*/

//try to understand this example:
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Create a map that associates strings with integers
    map<string, int> myMap;

    // Inserting key-value pairs
    myMap["apple"] = 1;
    myMap["banana"] = 2;
    myMap["orange"] = 3;

    // Accessing values using keys
    cout << "Apple: " << myMap["apple"] << endl; // Output: Apple: 1

    // Iterating through the map
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    // Output:
    // apple: 1
    // banana: 2
    // orange: 3

    // Finding an element
    auto it = myMap.find("banana");
    if (it != myMap.end()) {
        cout << "Found banana with value: " << it->second << endl; // Output: Found banana with value: 2
    }

    // Removing an element
    myMap.erase("orange");

    // Displaying elements after removal
    cout << "After removing orange:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    // Output:
    // apple: 1
    // banana: 2

    return 0;
}
