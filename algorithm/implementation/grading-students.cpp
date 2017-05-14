#include <iostream>
using namespace std;

/*
https://www.hackerrank.com/challenges/grading

Sample Input 0
4
73
67
38
33

Sample Output 0
75
67
40
33
*/

int main() {
    int n, grade;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> grade;
        if (grade >= 38 && grade % 5 >= 3){
           grade += 5-grade%5;
        }
        cout << grade << endl;
    }
    return 0;
}
