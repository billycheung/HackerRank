#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
https://www.hackerrank.com/challenges/diagonal-difference
Given a square matrix of size N x N, calculate the absolute difference between the sums of its diagonals.

Input Format
The first line contains a single integer, N. The next N lines denote the matrix's rows, with each line containing space-separated integers describing the columns.

Constraints
-100 <= Elements in the matrix <= 100

Output Format
Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

Sample Input
3
11 2 4
4 5 6
10 8 -12

Sample Output
15
*/
int arr[100][100];

int main() {
    int n, tmp;
    long long sum1=0, sum2=0;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> tmp;
            if (i==j){
                sum1+=tmp;
            }
            if (n-i-1 == j){
                sum2+=tmp;
            }
        }
    }
    cout << abs(sum1-sum2);
    return 0;
}
