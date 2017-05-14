#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number, n, determine and print whether it's Prime or Not prime.

Note: If possible, try to come up with a O(sqrt(n)) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code!

Sample Input
3
12
5
7

Sample Output
Not prime
Prime
Prime
*/

bool isPrime(int n){
    if (n == 1) return false;
    for (int i=2; i*i<=n; i++){
        if (n%i == 0)
            return false;
    }
    return true;
}
int main() {
    int n, t;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> t;
        if (isPrime(t)){
            cout << "Prime" << endl;
        } else{
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
