#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*
you will be give q queries.Each query is of one of the three types:
1 x :Add an element x to the set.
2 x :Delete an element x from the set. (If the number x is not present in the set then do nothing).
3 x :If the number x is present in the set then print "Yes"(without quotes) else print "No"(without quotes).

Sample Input
8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6

Sample Output
Yes
No
No
*/
int main() {
    int n, q, t;
    cin >> n;
    set<int> s;
    for (int i=0; i<n; i++){
        cin >> q >> t;
        if (q == 1)
            s.insert(t);
        else if (q == 2)
            s.erase(t);
        else {
            auto a = s.find(t);
            string ans = (a != s.end()) ? "Yes" : "No";
            cout << ans << endl;
        }
    }
    return 0;
}
