#include <iostream>
using namespace std;
int x[1001];
/* https://www.hackerrank.com/contests/w32/challenges/duplication */

bool IsPowerOfTwo(int x)
{
    return (x & (x - 1)) == 0;
}

int main() {
    x[0] = 0;
    x[1] = 1;
    int powerTotal = 1;
    for (int i=2;i<1001;i++){
        if (IsPowerOfTwo(i)){
            powerTotal *= 2;
        }
        x[i] = x[i-powerTotal] == 0 ? 1 : 0;
    }
    int n,tmp;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> tmp;
        cout << x[tmp] << endl;
    }
    return 0;
}
