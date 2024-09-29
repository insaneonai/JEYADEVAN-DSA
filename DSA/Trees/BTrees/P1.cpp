// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Node {
public:
    Node* left = NULL;
    Node* right = NULL;
    string name;

    Node(string n) {
        name = n;
    }
    Node() {
    }
};
Node* insert(Node* root, string name) {
    if (root == NULL) {
        return new Node(name);
    }
    if (root->name == name) {
        return root;
    }

    if (name < root->name) {
        root->left = insert(root->left, name);
    }
    else {
        root->right = insert(root->right, name);
    }
    return root;
}

Node* getsucc(Node* root) {
    Node* temp = root->right;
    while (temp != NULL && temp->left != NULL) {
        temp = temp->left;
    }
    return temp;

}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->name << endl;
    inorder(root->right);
}

Node* deleteNode(Node* root, string name) {
    if (root == NULL) {
        return root;
    }

    if (name < root->name) {
        root->left = deleteNode(root->left, name);
    }
    else if (name > root->name) {
        root->right = deleteNode(root->right, name);
    }
    else {
        // node to delete
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* succ = getsucc(root);
        root->name = succ->name;
        root->right = deleteNode(root->right, succ->name);
    }
    return root;
}
int main() {
    int c;
    string name;
    Node* root = NULL;
    Node* max;
    do {
        cout << "1. Insert a node" << endl;
        cout << "2. delete a node" << endl;
        cout << "3. display" << endl;
        cout << "4. exit" << endl;
        cout << "Choice: ";
        cin >> c;
        switch (c) {
        case 1:
            cout << "Please enter name: ";
            cin >> name;
            root = insert(root, name);
            break;
        case 2:
            cout << "Please enter name: ";
            cin >> name;
            max = deleteNode(root, name);
            break;
        case 3:
            inorder(root);
            break;
        default:
            break;
        }
    } while (c != 4);

    return 0;
}
