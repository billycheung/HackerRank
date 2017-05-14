#include <iostream>
using namespace std;
/*
Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.

Sample Input 1
5
Sample OUtput 1
1

Sample Input 2
13
Sample Output 2
2

Sample Case 1: 
The binary representation of 5 is 101, so the maximum number of consecutive 1's is 1.

Sample Case 2: 
The binary representation of 13 is 1101, so the maximum number of consecutive 1's is 2.

*/


int main() {
    int n, max = 0, tmp = 0;
    cin >> n;
    while (n >= 1){
        if (n%2 == 1)
        {
            if (++tmp > max)
                max = tmp;
        }
        else{
            tmp = 0;
        }
        n = n/2;
    }
    cout << max;
    return 0;
}
