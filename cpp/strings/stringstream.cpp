#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

/*
You have to complete the function vector parseInts(string str). str will be a string consisting of comma-separated integers, and you have to return a vector of int representing the integers.

Note If you want to know how to push elements in a vector, solve the first problem in the STL chapter.

Sample Input
23,4,56

Sample Output
23
4
56
*/

vector<int> parseInts(string str) {
   vector<int> ints;
   stringstream ss(str);
   char ch;
   int tmp;
   while (!ss.eof()) {
       ss >> tmp >> ch;
       ints.push_back(tmp);
   }
   return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
