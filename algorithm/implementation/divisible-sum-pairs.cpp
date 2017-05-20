#include <iostream>
using namespace std;

/* https://www.hackerrank.com/challenges/divisible-sum-pairs

Print the number of (i,j) pairs where i<j  and ai + aj is evenly divisible by n.

Sample Input
6 3
1 3 2 6 1 2

Sample Output
5
*/

// O(n) solution
int main() {
   int n,k,tmp,total=0;
   cin >> n >> k;
   int nums[k];
   for (int i=0;i<k;i++) nums[i]=0;
   for (int i=0;i<n;i++){
      cin >> tmp;
      nums[tmp%k]++;
   }

   for (int num=0; num<=k/2; num++){
      int freq = nums[num];
      if (num == 0 || k-num == num){
         total += freq*(freq-1)/2;
      } else if (nums[k-num] > 0){
         total += freq * nums[k-num];
         nums[num] = 0;
      }
   }
   cout << total;
   return 0;
}
