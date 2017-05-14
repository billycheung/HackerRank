#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() { 
    vector<int> a;
    vector<int> b;
    char c;
  string line;
  getline(cin, line);
  istringstream iss(line);
  while ( iss >> c) {    
    a.push_back(c);
  }

  getline(cin, line);
  
  while ( iss >> c) {    
    b.push_back(c);
  }
    return 0;
}
