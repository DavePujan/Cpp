/* in bubble sort we are going to check only for two elements, after the first swapping our last elements will be setteled at its perfect place.
firstly run loop from n-1 to 1 i--
then for 0 to i-1 j++
if arr j >arr j+1 then swap j and j+1
then print it.

worst avg time == O(n2)
best is O(n) 
Space Complexity: O(1) */

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) { // Loop from n-1 to 1
    int didSwap = 0; 
        for (int j = 0; j < i; j++) { // Loop from 0 to i-1
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap =1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter how many numbers you want to sort: " << endl;
    cin >> n;
    int arr[n]; // C++ allows variable-length arrays
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
