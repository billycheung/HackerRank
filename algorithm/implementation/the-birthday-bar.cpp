#include <iostream>
using namespace std;

/* https://www.hackerrank.com/challenges/the-birthday-bar
Sample Input 0

5
1 2 1 3 2 
3 2
Sample Output 0

2
*/
int main() {
   int n, d, m, count=0, total=0;
   cin >> n;
   int nums[n];
   for (int i=0;i<n;i++)
      cin >> nums[i];

   cin >> d >> m;
   for (int j=0;j<m && j<n;j++){
      total += nums[j];      
   }
   if (total == d) count++;

   for (int i=0;i<n-m;i++){
      total = total - nums[i] + nums[m+i];
      if (total == d) count++;
   }
   cout << count;
   return 0;
}
