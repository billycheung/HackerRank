#include <iostream>
#include <queue>
using namespace std;
/*
Another Solution:
Jesse loves cookies. He wants the sweetness of all his cookies to be greater than value K. To do this, Jesse repeatedly mixes two cookies with the least sweetness. He creates a special combined cookie with:
sweetness = (1 x Least sweet cookie  + 2 x 2nd least sweet cookie).

He repeats this procedure until all the cookies in his collection have a sweetness >= K. 
You are given Jesse's cookies. Print the number of operations required to give the cookies a sweetness >= K. Print -1 if this isn't possible.

Sample Input
6 7
1 2 3 9 10 12

Sample Output
2
*/

int main(){
    priority_queue<int, vector<int>, greater<int>> sweets;
    int s, k;
    cin >> s >> k;
    int tmp;
    for (int i=0; i<s; i++)
    {
        scanf("%d", &tmp);
        sweets.push(tmp);
    }

    int op = 0;
    int curr = 0;
    while ((curr = sweets.top()) < k && sweets.size() > 1){
        sweets.pop();
        int curr2 = sweets.top();
        sweets.pop();
        sweets.push(curr + curr2*2);
        op++;
    }

    if(sweets.size() == 1 && sweets.top() < k){
        op = -1;
    }
    cout << op;
    return 0;
}