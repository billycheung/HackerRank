#include <iostream>
using namespace std;
/*
You have three stacks of cylinders where each cylinder has the same diameter, but they may vary in height. You can change the height of a stack by removing and discarding its topmost cylinder any number of times.

Find the maximum possible height of the stacks such that all of the stacks are exactly the same height. This means you must remove zero or more cylinders from the top of zero or more of the three stacks until they're all the same height, then print the height. The removals must be performed in such a way as to maximize the height.

Note: An empty stack is still a stack.

Sample Input
5 3 4
3 2 1 1 1
4 3 2
1 1 4 1

Sample Output
5
*/


int min(int a, int b, int c)
{
   int t = a < b? a : b;
   return t <  c ? t: c;
}


int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int numCylinder[] = {a, b, c};
    auto cylinder = new int*[3];
    cylinder[0]= new int[a];
    cylinder[1]= new int[b];
    cylinder[2] = new int[c];

    int height[3] = {};

    int tmp = 0;
    for (int i=0; i<3; i++){
        for (int j=0; j<numCylinder[i]; j++){
            cin >> tmp;
            cylinder[i][j] = tmp;
            height[i] += tmp;
        }
    }

    int index[] = {0, 0, 0};
    int minHeight = min(height[0], height[1], height[2]);
    while (height[0] != height[1] || height[1] != height[2]){
        for (int i=0; i<3; ++i){
            if (minHeight < height[i]){
                 height[i] -= cylinder[i][index[i]++];
            }
        }
        minHeight = min(height[0], height[1], height[2]);
    }

    cout << height[0];
    return 0;
}
