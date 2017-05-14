#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
https://www.hackerrank.com/challenges/mini-max-sum

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)

Sample Input
1 2 3 4 5

Sample Output
10 14
*/

int main() {
    long sum, min, max, tmp;
    cin >> tmp;
    min = tmp;
    max = tmp;
    sum = tmp;
    for (int i=1; i<5; i++){
        cin >> tmp;
        if (tmp < min) min = tmp;
        if (tmp > max) max = tmp;
        sum += tmp;
    }
    cout << sum-max << " " << sum-min << endl;
    return 0;
}
