#include <iostream>
#include <unordered_map>
using namespace std;

/* https://www.hackerrank.com/challenges/drawing-book
*/

int main() {
   int n,p;
   cin >> n >> p;
   cout << min(p/2, n%2 == 0 ?(n+1-p)/2 : (n-p)/2);
   return 0;
}
