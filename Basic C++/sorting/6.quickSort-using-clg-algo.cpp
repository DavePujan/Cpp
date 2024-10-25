/*
quickSort (arr,low,high)-->
    if low<high
        pi = partition(arr,low,high)
        quicksort arr,low,pi-1
        quicksort arr,pi+1,high

partition(arr,low,high)-->
    pivot = low , i = low+1 , j = high

    while i<j
        while i<=high and arr i < pivot
            i++
        while j>=low and arr j > pivot
            j++
        if i< j
            swap i and j
    
    set low = j , j = pivot
    return j
*/

#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
        //select first elsement as pivot
        int pivot = arr[low];
        int i = low+1;
        int j = high;
        
        while(i<=j){
            // now i should be smaller than pivot
            while(i <= high && arr[i] < pivot){ 
                i++;
            }
            // and j should be bigger than pivot
            while(j >= low && arr[j] > pivot){
                j--;
            }
            if(i<j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    arr[low] = arr[j]; 
    arr[j] = pivot;
    return j;
}

void quickSort(int arr[],int low, int high){
    if(low<high){
        //pi is partition index
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1); //before pi
        quickSort(arr,pi+1,high); //after pi
    }
}

int main()
{
int arr[]= {1,4,7,2,3};
int n = sizeof(arr) /sizeof(arr[0]);
quickSort(arr,0,n-1);
    
      cout<< "Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<< "\n";
    return 0;
}

