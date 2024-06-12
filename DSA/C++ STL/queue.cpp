#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> demo_queue;
	cout << "Size of Queue just after initializing: " << demo_queue.size() << endl;

	for (int i = 0; i < 5; i++) {
		if (i < 2) {
			demo_queue.push(i); // adds i to queue by creating a temorary queue;
		}
		else {
			demo_queue.emplace(i);  // Reconstructs the demo_queue, Does inplace addition;
		}
	}
	if (!demo_queue.empty()) {
		cout << "Size of Queue after inserting elements: " << demo_queue.size() << endl;
	}

	cout << "First element of Queue: " << demo_queue.front() << endl;
	cout << "Second element of Queue: " << demo_queue.back() << endl;

	cout << "Displaying all elements of Queue:" << endl;

	while (!demo_queue.empty()) {
		cout << demo_queue.front() << " ";
		demo_queue.pop(); // removes first element of queue;
	}



}