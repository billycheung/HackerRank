#include <iostream>
#include <queue>
using namespace std;
/*
Given an input stream of n integers, you must perform the following task for each ith integer:

1. Add the ith integer to a running list of integers.
2. Find the median of the updated list (i.e., for the first element through the ith element).
3. Print the list's updated median on a new line. The printed value must be a double-precision number scaled to 1 decimal place (i.e., 12.3 format).

Sample Input
6
12
4
5
3
8
7

Sample Output
12.0
8.0
5.0
4.5
5.0
6.0

*/
int main(){
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int n, curr;
    cin >> n;
    for (int i=0; i<n; i++){

        cin >> curr;

        if (maxHeap.empty() || curr < maxHeap.top()){
            maxHeap.push(curr);
        } else{
            minHeap.push(curr);
        }
        if (maxHeap.size() > minHeap.size()+1){
            int tmp = maxHeap.top();
            maxHeap.pop();
            minHeap.push(tmp);
        } 

        if (minHeap.size() > maxHeap.size()+1){
            int tmp = minHeap.top();
            minHeap.pop();
            maxHeap.push(tmp);
        }

        if (minHeap.size() == maxHeap.size()){
            printf("%.1f\n",(maxHeap.top() + minHeap.top())/2.0);
        } else {
            if (minHeap.size() > maxHeap.size())
                printf("%.1f\n", (double)minHeap.top());
            else{
                printf("%.1f\n", (double)maxHeap.top());
            }
        }
    }
    
    return 0;
}