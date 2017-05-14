#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
https://www.hackerrank.com/challenges/plus-minus

Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10^-4  are acceptable.

Sample Input
6
-4 3 -9 0 4 1    

Sample Output
0.500000
0.333333
0.166667
*/


int main() {
    int n, tmp;
    cin >> n;
    int a=0,b=0,c=0;
    for (int i=0;i<n;i++){
        cin >> tmp;
        if (tmp > 0) a++; else if (tmp < 0) b++; else c++;            
    }
    printf("%.6f\n%.6f\n%.6f",(double)a/n,(double)b/n,(double)c/n);
    return 0;
}
