#include <iostream>
using namespace std;

/* https://www.hackerrank.com/contests/infinitum18/challenges/pythagorean-triple */

int main() {
    long long a, b, c, m, n, multiple = 1;
    cin >> a;
    if (a %2 == 0){
       b = a*a/4 - 1;
       c = b+2;
    }
    else{
        b = (a*a-1)/2;
        c = b+1;  
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}
