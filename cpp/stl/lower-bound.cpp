#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
For each query you have to print "Yes"(without the quotes)if the number is present and at which index(1-based) it is present separated by a space.
If the number is not present you have to print "No"(without the quotes) followed by the index of the next smallest number just greater than that number.
You have to output each query in a new line.

Sample Input
 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15

Sample Output
 Yes 1
 No 5
 Yes 6
 Yes 8
 */


int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
    int q;
    cin >> q;
    int tmp;
    for (int i=0; i<q; i++){
        cin >> tmp;
        auto idx = lower_bound(arr, arr+n,tmp) - arr;
        if (arr[idx] == tmp)
            cout << "Yes ";
        else cout << "No ";
        cout << idx+1 << endl ;
    }
    
    return 0;
}
