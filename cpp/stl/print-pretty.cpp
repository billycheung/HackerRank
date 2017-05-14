#include <iostream>
#include <iomanip> 
using namespace std;

/*
For each test case, print 3 lines containing the formatted A, B, and C, respectively. Each A, B, and C must be formatted as follows:

1. A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  0x prefix) in lower case letters.
2. B: Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly 15 characters wide.
3. C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.

Sample Input
1  
100.345 2006.008 2331.41592653498

Sample Output
0x64             
_______+2006.01  
2.331415927E+03
*/

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        printf("%#lx\n",(long int)A);
        printf("%.*s%+.2f\n",15 - to_string((int)B).length() - 4,"_______________",B);
        printf("%.9E\n",C);
    }
    return 0;

}