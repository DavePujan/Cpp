#include <iostream>
#include <list>
using namespace std;

void display(list<int> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // empty List with of zero length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);

    display(list1);

    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9); // remove both 9 from the list
    // display(list1);

    // list1.sort();
    // display(list1);

    // list1.reverse();
    // display(list1);

    list<int> list2(3); // Empty list with of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 8;
    iter++;
    display(list2);
    
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"List 1 after merging with list 2: ";
    // display(list1);
    return 0;
}






/*
Theory:

-->list is a sequence container that implements a doubly linked list.
-->It provides several advantages and is particularly useful when you need to perform frequent insertions and deletions of elements in the middle of the sequence.

Key Features of list:
    -Doubly Linked Structure: Each element (node) in a list contains pointers to both the next and the previous elements, allowing bidirectional traversal.

    -Dynamic Size: Unlike arrays, a list can grow and shrink in size dynamically as elements are added or removed.

    -Fast Insertions and Deletions: You can efficiently insert or remove elements at any position (beginning, middle, or end) without the need to shift other elements, which is a limitation of array-based containers.


Modifiers:
    push_back(): Add an element to the end.
    push_front(): Add an element to the front.
    pop_back(): Remove the last element.
    pop_front(): Remove the first element.
    insert(): Insert elements at a specific position.
    erase(): Remove elements at a specific position.
    clear(): Remove all elements.

Accessors:
    front(): Access the first element.
    back(): Access the last element.
    Iterators: Support for iterators to traverse the elements.


When to Use list:
Use list when:
    You need frequent insertions and deletions from both ends or the middle of the container.
    You don't require random access to elements (like vector provides).
    You want to manage a collection of elements that might grow or shrink dynamically.

-->Keep in mind that while list offers efficient insertion and deletion, it may not be the best choice for scenarios where you need to access elements by index frequently, as this will be slower compared to using vector.
*/