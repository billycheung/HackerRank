#include <iostream>
using namespace std;

/*
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note: 0 is considered to be an even index.
Sample Input
2
Hacker
Rank

Sample Output
Hce akr
Rn ak
*/

int main() {
    int n;
    cin >> n;
    string s;
    for (int i=0; i<n; ++i){
        cin >> s;
        for (int j=0; j<s.size(); j+=2){
            cout << s[j];
        }
        cout << " ";
        for (int j=1; j<s.size(); j+=2){
            cout << s[j];
        }
        cout << endl;
    }
    return 0;
}
