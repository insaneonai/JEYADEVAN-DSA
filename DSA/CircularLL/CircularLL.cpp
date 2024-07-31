#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

node* insert_e(node* head, int n) {
    node* new_node = new node(n);
    if (head == NULL) {
        new_node->next = new_node;
        return new_node;
    }
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    return head;
}

node* delete_h(node* head) {
    if (head == NULL) {
        return head;
    }

    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = head->next;
    delete head;
    return temp->next;
}

void print(node* head) {
    if (head == NULL) return;
    node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    node* head = NULL;
    head = insert_e(head, 1);
    head = insert_e(head, 2);
    head = insert_e(head, 3);
    head = insert_e(head, 4);
    print(head);  // Print the circular linked list.
    head = delete_h(head);
    print(head);

    return 0;
}
