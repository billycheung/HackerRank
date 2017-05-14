#include <iostream>
using namespace std;

/*
https://www.hackerrank.com/challenges/birthday-cake-candles
Colleen is turning n years old! She has n candles of various heights on her cake, and candle i has height heighti. Because the taller candles tower over the shorter ones, Colleen can only blow out the tallest candles.

Given the heighti for each individual candle, find and print the number of candles she can successfully blow out.

Sample Input 0
4
3 2 1 3

Sample Output 0
2
*/
int main() {
    int n, tmp,max=0, count=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> tmp;
        if (max < tmp){
            max = tmp;
            count = 0;
        }
        if (tmp == max){
            count++;
        }
    }
    cout << count;
    return 0;
}
