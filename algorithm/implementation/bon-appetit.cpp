#include <iostream>
using namespace std;

/* https://www.hackerrank.com/challenges/bon-appetit

*/


int main() {
   int n,k,tmp, amt, total = 0, m;
   cin >> n >> k;
   for (int i=0;i<n;i++){
      cin >> tmp;
      total += tmp;
      if (i==k) m = tmp;
   }
   cin >> amt;
   if ((total-m)/2.0 == amt){
      cout << "Bon Appetit";
   } else{
      cout << amt - (total-m)/2.0;
   }
   return 0;
}
