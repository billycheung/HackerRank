
#include <iostream>
#include <algorithm>
using namespace std;
/*
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:

Array is sorted in numSwaps swaps. 
where numSwaps is the number of swaps that took place.
First Element: firstElement 
where firstElement is the first element in the sorted array.
Last Element: lastElement 
where lastElement is the last element in the sorted array.

Sample Input 0
3
1 2 3

Sample Output 0
Array is sorted in 0 swaps.
First Element: 1
Last Element: 3


*/

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    
    int total = 0;
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberOfSwaps = 0;

        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
                total++;
            }
        }

        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0) {
            break;
        }
    }
    
    cout << "Array is sorted in " << total << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    
    return 0;
}
