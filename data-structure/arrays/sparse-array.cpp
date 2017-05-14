#include <iostream>
#include <unordered_map>
using namespace std;
/*
There are N strings. Each string's length is no more than 20 characters. There are also q queries. For each query, you are given a string, and you need to find out how many times this string occurred previously.

Sample Input
4
aba
baba
aba
xzxb
3
aba
xzxb
ab

Sample Output
2
1
0

*/


int main() { 
    int n,q;
    cin >> n;
    unordered_map<string, int> m;
    string tmp;
    for(int i = 0; i < n; i++){
       cin >> tmp;
       m[tmp]++;
    }
    cin >> q;
    for (int i=0; i<q; i++){
        cin >> tmp;
        cout << m[tmp] << endl;
    }
    return 0;
}
