#include <iostream>
using namespace std;

/* https://www.hackerrank.com/challenges/breaking-best-and-worst-records

Sample Input 0
9
10 5 20 20 4 5 2 25 1

Sample Output 0
2 4

Sample Input 1
10
3 4 21 36 10 28 35 5 24 42

Sample Output 1
4 0

*/
int main() {
   int c, tmp, max, min, maxCount=0, minCount=0;
   cin >> c;
   cin >> tmp;
   max = min = tmp;
   for (int i=1;i<c;i++){
   		cin >> tmp;
   		if (tmp > max){
   			max = tmp;
   			maxCount++;
   		}

   		if (tmp < min){
   			min = tmp;
   			minCount++;
   		}
   }
   cout << maxCount << " " << minCount;
   return 0;
}
