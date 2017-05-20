#include <iostream>
using namespace std;

/* https://www.hackerrank.com/challenges/migratory-birds

*/

int birds[6] = {};
int main() {
   int n,tmp;
   cin >> n;
   for (int i=0;i<n;i++){
      cin >> tmp;
      birds[tmp]++;
   }

   int max = 0, maxIndex = 0;
   for (int i=1;i<6;i++){
      if (birds[i] > max){
         max = birds[i];
         maxIndex = i;
      }
   }
   cout << maxIndex;
   return 0;
}
