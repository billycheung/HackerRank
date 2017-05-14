#include <iostream>
#include <unordered_map>
using namespace std;

/*
Given  names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for  is not found, print Not found instead.

Note: Your phone book should be a Dictionary/Map/HashMap data structure.
Sample Input:
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry

Sample OUtput
sam=99912222
Not found
harry=12299933
*/

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> phonebook;
    string name;
    int phoneNum;
    for (int i=0; i<n; i++){
        cin >> name >> phoneNum;
        phonebook[name] = phoneNum;
    }
    
    while (!cin.eof()){
        cin >> name;
        if (phonebook.find(name) != phonebook.end()){
            cout << name << "=" << phonebook[name] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
