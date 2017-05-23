#include <iostream>
#include <unordered_map>
using namespace std;

/* https://www.hackerrank.com/challenges/sock-merchant

*/


int main() {
   int n,tmp;
   cin >> n;
   unordered_map<int, int> socks;
   for (int i=0;i<n;i++){
      cin >> tmp;
      socks[tmp]++;
   }
   int count = 0;
   for (auto& s:socks)
      count += s.second/2;

   cout << count;
   
   return 0;
}
