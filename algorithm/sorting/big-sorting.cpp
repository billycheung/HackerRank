#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
https://www.hackerrank.com/challenges/big-sorting

Consider an array of numeric strings, unsorted, where each string is a positive number with anywhere from 1 to 10^6 digits. Sort the array's elements in non-decreasing (i.e., ascending) order of their real-world integer values and print each element of the sorted array on a new line.

Sample Input 0
6
31415926535897932384626433832795
1
3
10
3
5

Sample Output 0
1
3
3
5
10
31415926535897932384626433832795
*/

bool compare(const string l, const string r)
{
    auto lsize = l.size();
    auto rsize = r.size();
    return (lsize==rsize) ? l<r: lsize < rsize;
}

int main() {
    string tmp;
    int n;
    cin >> n;
    vector<string> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end(), compare);
    for (auto e:nums){
        cout << e << endl;
    }
    return 0;
}
