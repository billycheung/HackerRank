#include <iostream>
#include <stack>
using namespace std;
/*
Given n strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, print YES on a new line; otherwise, print NO on a new line.
Sample Input
3
{[()]}
{[(])}
{{[[(())]]}}

Sample Output
YES
NO
YES
*/

bool isBalanced(string s){
    stack<char> chars;
    for (auto c:s){
        if (c == '{' || c == '(' || c == '['){
            chars.push(c);
            continue;
        }

        if (c == '}' || c == ')' || c == ']'){
            if (chars.empty())
                return false;
            char curr = chars.top();
            chars.pop();
            if ((curr == '{' && c != '}') || (curr == '(' && c != ')') || (curr == '[' && c != ']')) {
                return false;
            }
        }
    }
    return chars.empty();
}

int main() {
    int n;
    cin >> n;
    
    string s;
    for (int i=0; i<n; i++){
        cin >> s;
        if (isBalanced(s))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
