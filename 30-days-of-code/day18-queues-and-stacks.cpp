#include <iostream>
#include <stack>
#include <queue>

using namespace std;

/*
You do not need to read anything from stdin. The locked stub code in your editor reads a single line containing string s. It then calls the methods specified above to pass each character to your instance variables.

*/

class Solution {
    private:
        stack<char> theStack;
        queue<char> theQueue;
    public:
        void pushCharacter(char ch){
            theStack.push(ch);
        }
    
        void enqueueCharacter(char ch) {
            theQueue.push(ch);
        }
    
        char popCharacter(){
            char c = theStack.top(); theStack.pop();
            return c;
        }
    
        char dequeueCharacter(){
            char c = theQueue.front(); theQueue.pop();
            return c;
        }

};
