#include <iostream>

using namespace std;

class Node {
public:
    Node* left = NULL;
    Node* right = NULL;
    string role;
    float salary;

    Node(float s, string r) {
        salary = s;
        role = r;
    }
    Node() {
    }
};

Node* insert(Node* root, float salary, string role) {
    if (root == NULL) {
        return new Node(salary, role);
    }
    if (root->role == role && root->salary == salary) {
        return root;
    }

    if (salary < root->salary) {
        root->left = insert(root->left, salary, role);
    }
    else {
        root->right = insert(root->right, salary, role);
    }
    return root;
}

Node* maxNode(Node* root, string role) {
    if (root == NULL) {
        return 0;
    }
    Node* res = root->role == role ? root : NULL;

    Node* left = maxNode(root->left, role);
    Node* right = maxNode(root->right, role);
    if (left != NULL && (res == NULL || (res->salary < left->salary))) {
        res = left;
    }
    if (right != NULL && (res == NULL || (res->salary < right->salary))) {
        res = right;
    }
    return res;
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->salary << " " << root->role << endl;
    inorder(root->right);
}

int main() {
    int c;
    string role;
    float salary;
    Node* root = NULL;
    Node* max;
    do {
        cout << "1. Insert a node" << endl;
        cout << "2. display the highest with role" << endl;
        cout << "3. Exit" << endl;
        cout << "Choice: ";
        cin >> c;
        switch (c) {
        case 1:
            cout << "Please enter role: ";
            cin >> role;
            cout << "Please enter salary: ";
            cin >> salary;
            root = insert(root, salary, role);
            break;
        case 2:
            cout << "Please enter role: ";
            cin >> role;
            max = maxNode(root, role);
            cout << max->role << " " << max->salary << endl;
            break;
        default:
            break;
        }
    } while (c != 3);

    return 0;
}