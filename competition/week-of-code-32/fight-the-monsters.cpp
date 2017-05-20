#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n,hit,t, tmp, count = 0;
    priority_queue<int, vector<int>, greater<int> > monsters;
    cin >> n >> hit >> t;
    for (int i=0;i<n;i++){
        scanf("%d", &tmp);
        monsters.push(tmp);
    }

    while (t > 0 && !monsters.empty()) {
        int h = monsters.top();
        monsters.pop();
        t -= h/hit;
        if (h%hit > 0) t--;
        if (t >= 0)
            count++;
    }

    cout << count;
    return 0;
}
