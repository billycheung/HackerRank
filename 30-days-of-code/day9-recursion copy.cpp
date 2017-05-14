#include <iostream>
using namespace std;

/*
Write a factorial function that takes a positive integer,  as a parameter and prints the result of N! (N factorial).

Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of 0.

Sample Input
3

Sample Output
6
*/
int factorial(int n){
    return n == 1? 1 : n * factorial(n-1);
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
