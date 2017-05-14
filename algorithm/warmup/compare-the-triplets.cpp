#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
https://www.hackerrank.com/challenges/compare-the-triplets

Sample Input
5 6 7
3 6 10

Sample Output
1 1 
*/


int main() {
    int a0,a1,a2,b0,b1,b2,ta=0,tb=0;
    cin>>a0>>a1>>a2>>b0>>b1>>b2;
    if (a0 > b0) ta++; else if (b0 > a0) tb++;
    if (a1 > b1) ta++; else if (b1 > a1) tb++; 
    if (a2 > b2) ta++; else if (b2 > a2) tb++; 
    cout << ta << " " << tb << endl;
    return 0;
}
