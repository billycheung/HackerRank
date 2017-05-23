#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    long long count = 1;
    for (int i=0;i<n;i++){
        cin >> tmp;
        count *= tmp;
    }
    cout << floor(count/1024.0*4.0);

    return 0;
}
