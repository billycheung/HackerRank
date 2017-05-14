#include <iostream>
using namespace std;

/*
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.
Sample Input:
4
1 4 3 2

Sample Output:
2 3 4 1
*/


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int arr_i = n-1;arr_i >= 0;arr_i--){
       cout << arr[arr_i] << " ";
    }
    return 0;
}
