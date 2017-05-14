#include <iostream>
using namespace std;

/*
Given set S={1,2,3,...,N} . Find two integers, A and B (where A<B ), from set S such that the value of A&B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.

Sample Input
3
5 2
8 5
2 2

Sample Output
1
4
0
*/

int main() {
    int c,n,k;
    cin >> c;
    for (int i=0;i<c;i++){
        cin >> n >> k;
        int max = 0;
        bool found = false;
        for (int j=1;j<=n;j++){
            if (found)
                break;
            for (int y=j+1;y<=n;y++){
                int r = j&y;
                if (r > max && r < k){
                    max = r;
                }
                if (max == k-1){
                    found = true;
                }
            }
        }
        cout << max << endl;
    }
    
    return 0;
}
