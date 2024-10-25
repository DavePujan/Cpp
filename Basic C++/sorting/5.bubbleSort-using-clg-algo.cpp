/*
bubblesort(arr,n)-->
    for i 0 to n-1
        for j 0 to n-i-1
            if arr j > arr j+1
                swap j and j+1

main-->
    create array 
    int n = sizeof arr / sizeof arr0

    for i 0 to n
        print arr i
*/
#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() {
    int arr[] = {12, 11, 21, 12, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " ";
 
    cout << endl; 

    return 0;
}
