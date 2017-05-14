#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Print the integers in the sorted order one by one in a single line followed by a space.

Sample Input
5
1 6 10 8 4

Sample Output
1 4 6 8 10
*/


int main() {
    int n;
    cin >> n;
    vector<int> nums;
    int tmp;
    for (int i=0; i<n; i++){
        cin >> tmp;
        nums.push_back(tmp);
    }
    sort(nums.begin(), nums.end());
    for (auto i:nums)
        cout << i << " ";
    return 0;
}
