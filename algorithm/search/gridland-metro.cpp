#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
#define ull unsigned long long int
/*
https://www.hackerrank.com/challenges/gridland-metro
*/

int main() {
    ull n,m,k,r,start,end;
    cin >> n >> m >> k;
    multiset< pair<ull, pair<ull, ull> > > s;
    for (long i=0;i<k;i++){
        cin >> r >> start >> end;
        s.insert(make_pair(r, make_pair(start,end)));
    }
    ull total = n*m;
    ull prevStart = 0, prevEnd = 0, currRow = 0, maxEnd = 0;
    for (auto a:s){
        if (a.first != currRow){
            prevStart = prevEnd = maxEnd = 0;
        }
        ull rowMinus = 0;
        currRow = a.first;
        start = a.second.first;
        end = a.second.second;
        if (end > maxEnd){
            if (start > prevEnd){
                rowMinus = end-max(start,maxEnd)+1;
            }
            else if (start <= maxEnd && end >maxEnd) {
                rowMinus = end - maxEnd;
            } 
        }
        prevStart = start;
        prevEnd = end;
        if (end > maxEnd) maxEnd = end;
        total -= rowMinus;
    }
    cout << total << endl;
    return 0;
}
