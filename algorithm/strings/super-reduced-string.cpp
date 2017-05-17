#include <iostream>
#include <string>
using namespace std;

/* https://www.hackerrank.com/challenges/sherlock-and-cost

*/


int main() {
   string s;
   cin >> s;
   for (int i=s.size()-2;i>=0;i--)
      if (s[i] == s[i+1])
         s.erase(i,2);
      
   cout << (s.empty() ? "Empty String" : s);
   return 0;
}
