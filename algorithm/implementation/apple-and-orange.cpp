#include <iostream>
using namespace std;

/* https://www.hackerrank.com/challenges/apple-and-orange

Sample Input 0
7 11
5 15
3 2
-2 2 1
5 -6

Sample Output 0
1
1
*/

int main() {
    int s, t, a, b, m, n, c;
    cin >> s >> t >> a >> b >> m >>n;
    int apple=0, orange = 0;
    for (int i=0;i<m;i++){
        cin >> c;
        if (a+c >=s && a+c <= t)
            apple++;
    }

    for (int i=0;i<n;i++){
        cin >> c;
        if (b+c >=s && b+c <= t)
            orange++;
    }
    cout << apple << endl << orange << endl;
    return 0;
}
