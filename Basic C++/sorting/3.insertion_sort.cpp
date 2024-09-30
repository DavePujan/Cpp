/* in insertion sort we are gonna find min element and then swap it with its left element.
for 0 to n-1 j=i
while j>0 and arr j-1 > arr j then swap j and j-1 
and then do j--

Time complexity: O(N2) avg and worst
best case  O(N)
Space Complexity: O(1)*/
#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
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
   insertion_sort(arr, n);
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
