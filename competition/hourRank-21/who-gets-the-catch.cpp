#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;
int nx[3001];
int s[3001];

int main() {
    int n, x;

    cin >> n >> x;
    for (int i=0; i<n; i++)
    	cin >> nx[i];

    for (int i=0; i<n; i++)
    	cin >> s[i];

    int minIndex = 1, min = INT_MAX, count = 0;
    for (int i=0;i<n;i++){
        double tmp = (double)abs(nx[i]-x) / s[i];
        if (tmp < min){
        	min = tmp;
        	minIndex = i;
        	count = 1;
        }
        else if (tmp == min){
        	count++;
        }
    }

    if (count > 1)
    	cout << -1;
    else cout << minIndex;

    return 0;
}
