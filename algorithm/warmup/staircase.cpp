#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
https://www.hackerrank.com/challenges/staircase

Sample Input
6 

Sample Output
     #
    ##
   ###
  ####
 #####
######
*/

int main() {
   int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (j < n-1-i)
                cout << " ";
            else cout << "#";
        }
        cout << endl;
    }
    return 0;
}
