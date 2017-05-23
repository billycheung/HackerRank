#include <iostream>
#include <unordered_map>
using namespace std;

/* https://www.hackerrank.com/challenges/counting-valleys
*/

int main() {
   int n,level = 0, count=0;
   cin >> n;
   char c;
   bool pass = true;
   for (int i=0;i<n;i++){
   		cin >> c;
   		if (c == 'U'){
   			if (++level >= 0){
   				pass = true;
   			}
   		} else if (--level < 0 && pass){
   				count++;
   				pass = false;
   		}
   }
   cout << count;
   return 0;
}
