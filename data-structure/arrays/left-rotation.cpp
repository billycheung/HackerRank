#include <vector>
#include <iostream>
using namespace std;
/*

Given an array of N integers and a number, d, perform d left rotations on the array. Then print the updated array as a single line of space-separated integers.

Sample Input
5 4
1 2 3 4 5

Sample Output
5 1 2 3 4

*/

int main() { 
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for (int i = 0; i < n; i++){
        cout << arr[(i+d)%n];
        if (i != n-1)
            cout << " ";
    }
    return 0;
}
