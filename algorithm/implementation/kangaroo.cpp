#include <iostream>
using namespace std;

/* https://www.hackerrank.com/challenges/kangaroo

There are two kangaroos on an x-axis ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump. The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump. Given the starting locations and movement rates for each kangaroo, can you determine if they'll ever land at the same location at the same time?

Sample Input 0
0 3 4 2

Sample Output 0
YES

Sample Input 1
0 2 5 3

Sample Output 1
NO
*/
int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 > v2 && (x2 - x1)%(v1 - v2) == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
