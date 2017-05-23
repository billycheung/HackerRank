#include <iostream>
using namespace std;

int main() {
    long long x1,y1,x2,y2,xc,yc;
    cin >> x1 >> y1 >> x2 >> y2 >> xc >> yc;
    long long hcount = min(xc-x1,x2-xc);
    long long vcount = min(yc-y1,y2-yc);
    cout << hcount + vcount + (hcount * vcount) * 2;
    return 0;
}
