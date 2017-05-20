#include <iostream>
#include <queue>
using namespace std;
int R[10000000];
int main() {
    int n,s,t,p,g,seed,tmp;
    cin >> n >> s >> t >> R[0] >> g >> seed >> p;
    // n = 9, s = 0, t = 2
    // R[0]1= 1, g = 3, seed = 4, p = 7
    // R[i] = (R[i-1]*g + seed) mod p

    for (int i=1; i<n; i++){
        R[i] = (R[i-1]*g + seed)%p;
        cout << R[i] << endl;
    }

    //cout << 1 << endl;


    return 0;
}
