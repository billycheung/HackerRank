#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
https://www.hackerrank.com/challenges/a-very-big-sum

You are given an array of integers of size N. You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.
Sample Input
5
1000000001 1000000002 1000000003 1000000004 1000000005

Output
5000000015
*/

int main() {
    int n, tmp;
    cin >> n;
    long long total = 0;
    for (int i=0;i<n;i++){
        cin >> tmp;
        total += tmp;
    }
       cout << total;
    return 0;
}
