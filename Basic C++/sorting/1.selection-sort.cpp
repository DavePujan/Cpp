/*ALGO FOR SELECTION SORT
in selection sort we are gonna find the min element and then swap it with i th element.
first 0 to n-1 set min = i
then i+1 to n
if arr j< arr min then set min=j
theen after the j loop swap min and i
and then after i loop print arr i array.  

Time complexity: O(N2) because [O(n2/2 + n/2]
Space Complexity: O(1) */

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[min];
        arr[min]= arr[i];
        arr[i]= temp;
    }
    cout<< "Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<< "\n";
}
int main()
{
    int n;
    cout<< "Enter How Many Numbers you want to sort"<< endl;
    cin>>n;
    int arr[n];
    cout<< "Enter the numbers"<< endl;
    for(int i = 0;i<n; i++) cin>> arr[i];
    selection_sort(arr,n);
    return 0;
}

