/*
Time Complexity: O(N)
Space Complexity: O(1)

if you have done sorting then;
Time Complexity: O(N*log(N))
Space Complexity: O(n)
*/

/*
main-->
create array and call the function

findlargest(arr,n)-->
    set max = arr0
    for i 0 to n
        if max < arr i
            set max = arr i
    
    return max after the for loop
*/

#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;
    int max = findLargestElement(arr1, n);
    cout << "The largest element in the array is: " << max << endl;
    return 0;
}