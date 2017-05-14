#include <iostream>
#include <deque> 
using namespace std;

/*
Given a set of arrays of size N and an integer K, you have to find the maximum integer for each and every contiguous subarray of size K for each of the given arrays.

Sample Input
2
5 2
3 4 6 3 4
7 4
3 4 5 8 1 4 10

Sample Output
4 6 6 4
8 8 8 10

Explanation
For the first case, the contiguous subarrays of size 2 are {3,4},{4,6},{6,3} and {3,4}. The 4 maximum elements of subarray of size 2 are: 4 6 6 4. 

For the second case,the contiguous subarrays of size 4 are {3,4,5,8},{4,5,8,1},{5,8,1,4} and {8,1,4,10}. The 4 maximum element of subarray of size 4 are: 8 8 8 10.
*/

void printKMax(int arr[], int n, int k){
    deque<int> d;
    int maxIdx = 0;
    int count = 0;
    for (int i=0; i<k-1; i++){
        if (arr[i]>arr[maxIdx]){
            maxIdx = i;
        }
    }
    for (int i = k-1; i<n;i++){
        int start = i-k+1;
        if (start > maxIdx){
          maxIdx = start;
             for (int j=start; j<start+k; j++){
                if (arr[j]>arr[maxIdx]){
                    maxIdx = j;
                }
            }
        } else{
           if (arr[i] > arr[maxIdx]){
             maxIdx = i;
          }
        }
        printf("%d ", arr[maxIdx]);
    }
    cout << endl;
}

int main(){  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
          scanf("%d", &arr[i]);
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
