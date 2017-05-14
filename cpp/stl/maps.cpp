#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

/*
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has Q queries:

1 X Y:Add the marks Y to the student whose name is X.
2 X: Erase the marks of the students whose name is X.
3 X: Print the marks of the students whose name is X. (If X didn't get any marks print 0.)

Sample Input
7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess

Sample Output
30
20
0
*/


int main() {
    int n, q, m;
    string name;
    cin >> n;
    map<string, int> marks;
    for (int i=0; i<n;i++){
        cin >> q >> name;
        if (q == 1){
            cin >> m;
            marks[name] += m;
        } else if (q == 2){
            marks.erase(name);
        } else{
            cout << marks[name] << endl;
        }
        
    }
    return 0;
}
