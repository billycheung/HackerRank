#include <iostream>
#include <set>
using namespace std;

/* https://www.hackerrank.com/challenges/electronics-shop */

int main() {
   int n,m,s,tmp;
   cin >> n >> m >> s;
   set<int> keyboards;
   set<int> usbs;
   for (int i=0;i<m;i++){
      cin >> tmp;
      keyboards.insert(tmp);
   }

   for (int i=0;i<s;i++){
      cin >> tmp;
      usbs.insert(tmp);
   }

   int maxTotal = -1;
   for (auto rk = keyboards.rbegin(); rk!=keyboards.rend();++rk) {
      for (auto rit = usbs.rbegin(); rit!=usbs.rend();++rit){
         int total = *rk + *rit;
         if (total <= n && total > maxTotal){
            maxTotal = total;
         }
      }
   }
   cout << maxTotal;
   return 0;
}
