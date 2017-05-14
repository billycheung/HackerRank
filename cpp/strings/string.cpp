#include <iostream>
#include <string>
using namespace std;

/*
Sample Input
abcd
ef

Sample Output
4 2
abcdef
ebcd af
*/

int main() {
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a << b << endl;
    char t = a[0];
    a[0] = b[0];
    b[0] = t;
    cout << a << " " << b << endl;
    return 0;
}
