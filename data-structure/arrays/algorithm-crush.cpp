#include <iostream>
#include <unordered_map>
using namespace std;
/*
You are given a list of size N, initialized with zeroes. You have to perform M operations on the list and output the maximum of final values of all the N elements in the list. For every operation, you are given three integers a, b and k and you have to add value k to all the elements ranging from index a to b(both inclusive).

Sample Input
5 3
1 2 100
2 5 100
3 4 100

Sample Output
200
*/

int main() {
    int n, m;
    cin >> n >> m;
    int* arr = new int[n];
    unordered_map<int, long> diff;
    int s, e, num;
    for (int i=0; i<m; i++){
        cin >> s >> e >> num;
        diff[s] += num;
        diff[e+1] -= num;
    }
    
    long tmp = 0, max = 0;
    for (int i=1; i<=n; i++){
        tmp += diff[i];
        if (tmp > max)
            max = tmp;
    }
    cout << max;
    return 0;
}
