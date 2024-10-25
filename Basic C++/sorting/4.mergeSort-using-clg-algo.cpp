/*
mergesort(arr,beg,end)-->
        if beg<end
            mid = beg+end / 2
            mergesort (arr,beg,mid)
            mergesort (arr,mid+1,end)
            merge(arr,beg,mid,end)

merge(arr,beg,mid,end)-->
    int i j k
    create n1 mid - beg +1
    create n2 end - mid

    create *l new int[n1]
    create *r new int[n2]

    for i 0 to n1
        l[i] = arr[beg +i]
    for j 0 to n2
        r[j] = arr[mid+1+j]

    i=0, j=0, k=beg

    while i<n1 and j<n2
        if l[i]<= r[j]
            arr[k] = l[i]
            i++
        else 
            arr[k]= r[j]
            j++
        k++ (after both loop)

    while i<n1
        arr[k]=l[i]
        i++, k++
    
    while j<n2
        arr[k]= r[j]
        j++, k++

then delete[] l
     delete[] r

main-->
create arr[]
int n = sizeof n / sizeof arr0

for i 0 to n print arr[i]
*/

#include <iostream>
using namespace std;

void merge(int arr[], int beg, int mid, int end) {
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    // Use dynamic arrays (or vectors) instead of variable-length arrays (VLA)
    int* l = new int[n1]; 
    int* r = new int[n2]; 

    for (i = 0; i < n1; i++)
        l[i] = arr[beg + i]; // Fixed the index to use i instead of n1

    for (j = 0; j < n2; j++)
        r[j] = arr[mid + 1 + j]; // Fixed the index to use j instead of n2

    i = 0;
    j = 0;
    k = beg;

    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) { // Fixed index from n1 to i
            arr[k] = l[i];
            i++; // Added semicolon
        } else {
            arr[k] = r[j]; // Fixed index from n2 to j
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++; // Added semicolon
    }

    while (j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }

    // Free dynamically allocated memory
    delete[] l; 
    delete[] r;
}

void mergeSort(int arr[], int beg, int end) {
    if (beg < end) {
        int mid = beg + (end - beg) / 2; // Added type declaration for mid
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, beg, mid, end); // Changed mid.end to mid, end
    }
}

int main() {
    int arr[] = {12, 11, 21, 12, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Fixed spacing
    }
    cout << endl; // Add newline for better formatting

    return 0;
}
