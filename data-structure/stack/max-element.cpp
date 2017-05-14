#include <iostream>
#include <stack>
using namespace std;
/*
You have an empty sequence, and you will be given N queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.

Sample Input
10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3

Sample Output
26
91
*/

int main() {
    int n, q, t;
    cin >> n;
    stack<int> nums;
    for (int i=0; i<n; i++){
        cin >> q;
        if (q == 1){
            cin >> t;
            int max = t;
            if (!nums.empty()){
            	if (max < nums.top())
            		max = nums.top();
            }
            nums.push(max);
        }
        if (q == 2){
            nums.pop();
        }
        if (q == 3){
            cout << nums.top()<< endl;
        }
    }
    return 0;
}
