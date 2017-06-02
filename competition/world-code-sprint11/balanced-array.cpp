#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,tmp, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i=0;i<n/2;i++){
        cin >> tmp;
        sum1 += tmp;
    }
    for (int i=0;i<n/2;i++){
        cin >> tmp;
        sum2 += tmp;
    }
    cout << abs(sum1-sum2);
    return 0;
}
