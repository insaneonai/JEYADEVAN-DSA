#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> demo_double_ended_queue({ 0,1,2,3,4 });

	cout << "Inserting from back: " << endl;
	auto it = demo_double_ended_queue.end();
	for (int i = 5; i <= 10; i++) {
		it = demo_double_ended_queue.insert(it, i);
		it++;
	}

	for (it = demo_double_ended_queue.begin(); it != demo_double_ended_queue.end(); ++it) {
		cout << *it << " ";
	}

	cout << endl << "Removing from front: " << endl;

	demo_double_ended_queue.pop_front();

	for (it = demo_double_ended_queue.begin(); it != demo_double_ended_queue.end(); ++it) {
		cout << *it << " ";
	}

	cout << endl << "Removing from back: " << endl;

	demo_double_ended_queue.pop_back();

	for (it = demo_double_ended_queue.begin(); it != demo_double_ended_queue.end(); ++it) {
		cout << *it << " ";
	}

	cout << endl << "Inserting from front: " << endl;

	demo_double_ended_queue.insert(demo_double_ended_queue.begin(), 0);

	for (it = demo_double_ended_queue.begin(); it != demo_double_ended_queue.end(); ++it) {
		cout << *it << " ";
	}
}