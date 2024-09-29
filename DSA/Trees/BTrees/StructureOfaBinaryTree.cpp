#include <iostream>

using namespace std;


class BtreeNode {
public:
	BtreeNode* left;
	BtreeNode* right;
	int data;

	BtreeNode(int n) {
		data = n;
		left = NULL;
		right = NULL;
	}
};

int main() {
	int arr[] = { 1,2,3,4,5 };

	BtreeNode* root = new BtreeNode(-1);

	BtreeNode* temp = root;

	// Sqewed left tree.

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		BtreeNode* newNode = new BtreeNode(arr[i]);
		temp->left = newNode;
		temp = temp->left;
	}

	cout << "Left Sqewed tree created" << endl;

	temp = root;
	while (temp != NULL) {
		cout << temp->data << ' ';
		temp = temp->left;
	}

	temp = root;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		BtreeNode* newNode = new BtreeNode(arr[i]);
		temp->right = newNode;
		temp = temp->right;
	}

	cout << endl << "Right Sqewed tree created" << endl;

	temp = root;
	while (temp != NULL) {
		cout << temp->data << ' ';
		temp = temp->right;
	}

}