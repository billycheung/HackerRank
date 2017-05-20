#include <iostream>
#include <string>
using namespace std;

/* https://www.hackerrank.com/challenges/camelcase

*/


int main() {
   string s;
   cin >> s;
   int len = s.size();
   int count = 1;
   for (int i=1;i<len;i++)
   		if (s[i] >= 'A' && s[i] <= 'Z') count++;
   cout << count;
   return 0;
}
