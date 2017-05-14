#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

/*
https://www.hackerrank.com/challenges/variable-sized-arrays

For each pair of i and j values (i.e., for each query), print a single integer denoting the element located at index of the array referenced by a[i]. There should be a total of q lines of output.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output

5
9
*/

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    string line;
    vector<vector<int>> ints;
    int count, tmp;
    for (int i=0;i<a;i++){
        cin >> count;
        vector<int> tempints;
        for (int j=0; j<count; j++){
            cin >> tmp;
            tempints.push_back(tmp);
        }
        ints.push_back(tempints);
    }

    int c, d;
    for (int i=0; i<b; i++){
        cin >> c >> d;
        cout << ints[c][d] << endl;
    }
    return 0;
}
