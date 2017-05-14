#include <iostream>
#include <vector>
using namespace std;
/*
Given an array, A, of N integers, print each element in reverse order as a single line of space-separated integers.
Sample Input
4
1 4 3 2

Sample Output
2 3 4 1
*/

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int arr_i = n-1;arr_i >= 0;arr_i--){
       cout << arr[arr_i];
       if (arr_i != 0)
            cout << " ";
    }
    return 0;
}
