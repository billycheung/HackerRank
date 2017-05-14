#include <iostream>
#include <set>
using namespace std;

/*
BST solution to find the running median problem
*/

multiset<int> numsSet;
multiset<int>::iterator midIter;
int size = 0;
// Adds a number into the data structure.
void addNum(int num) 
{
    if(numsSet.empty())
    {
        midIter = numsSet.insert(num);
        size++;
        return; 
    }
    numsSet.insert(num);
    if((size&1) && num<*midIter) --midIter; 
    else if(!(size&1) && num>=*midIter) ++midIter;
    size++;
}

// Returns the median of current data stream
double findMedian() 
{
    if(size & 1) return *midIter;   
    else return (double)(*midIter+*next(midIter))/2;
}

int main(){
    int n, curr;
    cin >> n;
    for (int i=0; i<n; i++){
        scanf("%d", &curr);
        addNum(curr);
        printf("%.1f\n", findMedian());
    }
    return 0;
}