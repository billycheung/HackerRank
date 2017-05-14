#include <iostream>
using namespace std;
/*
https://www.hackerrank.com/challenges/time-conversion

Convert and print the given time in 24-hour format, where 00 <= hh <= 23.

Sample Input
07:05:45PM

Sample Output
19:05:45
*/


int main() {
    int hh,mm,ss;
    char v[2];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,&v);
    if (hh == 12) hh = 0;
    if (std::strcmp(v,"PM") == 0){
        hh = (hh+12)%24;
    } 
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}
