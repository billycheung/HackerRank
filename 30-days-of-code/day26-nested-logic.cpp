#include <iostream>
using namespace std;
/*

Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine=0).
If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, fine=15 Hackos x (the number of days late).
If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos x (the number of months late).
If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.

Sample Input
9 6 2015
6 6 2015

Sample Output
45

*/

int main() {
    int rd, rm, ry, dd, dm, dy;
    cin >> rd >> rm >> ry >> dd >> dm >> dy;
    if (ry > dy){
        cout << 10000;
    } else if (ry == dy && rm > dm){
        cout <<(rm - dm) * 500;
    } else if (ry == dy && rm == dm && rd > dd){
        cout << (rd - dd) * 15;
    } else {
        cout << 0;
    }
    return 0;
}
