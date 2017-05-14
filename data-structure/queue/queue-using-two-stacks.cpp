#include <iostream>
#include <stack>
using namespace std;
/*
In this challenge, you must first implement a queue using two stacks. Then process q queries, where each query is one of the following 3 types:

1 x: Enqueue element x into the end of the queue.
2: Dequeue the element at the front of the queue.
3: Print the element at the front of the queue.

Sample Input
10
1 42
2
1 14
3
1 28
3
1 60
1 78
2
2

Sample Output
14
14
*/

struct MyQueue{
	stack<int> inbox;
	stack<int> outbox;
	void enqueue(int i){
		inbox.push(i);
	}

	void moveToOutbox(){
		while (!inbox.empty()){
			outbox.push(inbox.top());
			inbox.pop();
		}
	}

	void dequeue(){
		if (outbox.empty()){
			moveToOutbox();
		}
		outbox.pop();
	}

	int front(){
		if (outbox.empty()){
			moveToOutbox();
		}
		return outbox.top();
	}
} myQueue;

int main() {
	int n, k, t;
	cin >> n;

	for (int i=0; i<n; ++i){
		cin >> k;
		switch (k){
			case 1: cin >> t; myQueue.enqueue(t); break;
			case 2: myQueue.dequeue(); break;
			case 3: cout << myQueue.front() << endl; break;
		}
		
	}
    return 0;
}
