#include <iostream>
#include <queue>

using namespace std;

int main() {
	priority_queue<int> pq;

	pq.push(5);
	pq.push(7);
	pq.emplace(8);
	cout << pq.top() << endl;

	pq.pop();
	cout << "After pop: ";
	cout << pq.top();

	// Minimum prioirty queue;

	priority_queue<int, vector<int>, greater<int>> pqm;
	cout << endl << "Minimum Priority Queue: " << endl;
	pqm.push(5);
	pqm.push(7);
	pqm.emplace(8);
	cout << pqm.top() << endl;

	pqm.pop();
	cout << "After pop: ";
	cout << pqm.top();

}