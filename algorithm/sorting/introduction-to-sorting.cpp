#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
https://www.hackerrank.com/challenges/tutorial-intro
*/

int main() {
    int k,n,tmp;
    cin >> k >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> tmp;
        if (tmp == k) { 
            cout << i;
            break;
        }
    }
    return 0;
}
