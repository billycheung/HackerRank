#include <iostream>
#include <numeric>
using namespace std;

/* https://www.hackerrank.com/challenges/between-two-sets

Sample Input
2 3
2 4
16 32 96

Sample Output
3
*/

int a[10], b[10];
int gcd(int a,int b){
	return b==0 ? a : gcd(b, a%b);
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

int main() {
    int ca, cb;
    cin >> ca >> cb;
    for (int i=0;i<ca;i++) cin >> a[i];
    for (int i=0;i<cb;i++) cin >> b[i];
    int gcdb = accumulate(b, b+cb, b[0], gcd);
    int lcma = accumulate(a, a+ca, a[0], lcm);
   	int count = 0;
   	for (int i = lcma; i<=gcdb; i += lcma){
   		if (gcdb%i == 0) count++;
   	}
   	cout << count;
    return 0;
}
