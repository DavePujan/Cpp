/*
1. Sequence Containers

Sequence containers store elements in a linear order and allow efficient access and modification of elements. The main sequence containers are:

- vector:
  - A dynamic array that can grow in size.
  - Provides fast access to elements via indexing.
  - Allows efficient insertion and deletion at the end, but slower at the beginning or middle.

  #include <iostream>
  #include <vector>
  using namespace std;

  int main() {
      vector<int> vec = {1, 2, 3};
      vec.push_back(4); // Add 4 at the end

      for (int num : vec) {
          cout << num << " "; // Output: 1 2 3 4
      }
      return 0;
  }

- deque (Double-Ended Queue):
  - Allows insertion and deletion at both ends.
  - More flexible than `vector` for operations at the front.

  #include <iostream>
  #include <deque>
  using namespace std;

  int main() {
      deque<int> dq = {1, 2, 3};
      dq.push_front(0); // Add 0 at the front
      dq.push_back(4);  // Add 4 at the back

      for (int num : dq) {
          cout << num << " "; // Output: 0 1 2 3 4
      }
      return 0;
  }

- list:
  - A doubly linked list that allows fast insertions and deletions from anywhere in the list.
  - Does not provide random access like `vector` or `deque`.

  #include <iostream>
  #include <list>
  using namespace std;

  int main() {
      list<int> myList = {1, 2, 3};
      myList.push_back(4); // Add 4 at the end
      myList.push_front(0); // Add 0 at the front

      for (int num : myList) {
          cout << num << " "; // Output: 0 1 2 3 4
      }
      return 0;
  }

2. Associative Containers

Associative containers store elements in a way that allows for fast retrieval based on keys. The main associative containers are:

- set:
  - A collection of unique elements stored in a specific order (by default, sorted).
  - Provides efficient operations for searching, inserting, and deleting.

  #include <iostream>
  #include <set>
  using namespace std;

  int main() {
      set<int> mySet = {3, 1, 2};
      mySet.insert(4); // Add 4

      for (int num : mySet) {
          cout << num << " "; // Output: 1 2 3 4
      }
      return 0;
  }

- map:
  - A collection of key-value pairs, where keys are unique.
  - Provides efficient retrieval based on keys.

  #include <iostream>
  #include <map>
  using namespace std;

  int main() {
      map<string, int> myMap;
      myMap["Alice"] = 30;
      myMap["Bob"] = 25;

      for (const auto &pair : myMap) {
          cout << pair.first << ": " << pair.second << endl; // Output: Alice: 30, Bob: 25
      }
      return 0;
  }

- multiset and multimap:
  - Similar to `set` and `map`, but allow duplicate keys.

3. Unordered Containers

Unordered containers use hash tables to provide fast access without a specific order. They are generally faster for searching than their ordered counterparts.

- unordered_set:
  - A collection of unique elements without a specific order.

  #include <iostream>
  #include <unordered_set>
  using namespace std;

  int main() {
      unordered_set<int> myUnorderedSet = {2, 3, 1};
      myUnorderedSet.insert(4); // Add 4

      for (int num : myUnorderedSet) {
          cout << num << " "; // Output order may vary
      }
      return 0;
  }

- unordered_map:
  - A collection of key-value pairs without a specific order.

  #include <iostream>
  #include <unordered_map>
  using namespace std;

  int main() {
      unordered_map<string, int> myUnorderedMap;
      myUnorderedMap["Charlie"] = 35;
      myUnorderedMap["Dave"] = 28;

      for (const auto &pair : myUnorderedMap) {
          cout << pair.first << ": " << pair.second << endl; // Output order may vary
      }
      return 0;
  }

*/