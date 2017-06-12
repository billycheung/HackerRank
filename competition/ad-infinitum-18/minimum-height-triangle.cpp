#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* https://www.hackerrank.com/contests/infinitum18/challenges/lowest-triangle */

int main() {
    int a, b;
    cin >> b >> a;
    printf("%d",(int)ceil(2.0 * a / b));
    return 0;
}
