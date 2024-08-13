#include <climits>

#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node* next = NULL;

    Node(int val){
        value = val;
    }

    Node(){
        next = NULL;
    }

};

void SwapNodes(Node*& n1, Node*& n2) {
    // Swap the values of the nodes
    int temp = n1->value;
    n1->value = n2->value;
    n2->value = temp;
}

// Function to perform selection sort on a linked list
void SelectionSort(Node* LL) {
    // Check for empty or single-node list
    if (LL == NULL || LL->next == NULL) {
        return; // No need to sort
    }

    Node* i = LL;

    while (i != NULL) {
        Node* MINI = i; // Assume the first node is the minimum
        Node* j = i->next; // Start comparing with the next node

        // Find the minimum node in the remaining list
        while (j != NULL) {
            if (j->value < MINI->value) {
                MINI = j; // Update the minimum node
            }
            j = j->next; // Move to the next node
        }

        // Swap the found minimum node with the current node
        if (MINI != i) {
            SwapNodes(MINI, i);
        }

        i = i->next; // Move to the next node
    }
}

int main(){
    Node* LL = new Node;

    int arr[] = {1,5,7,8,7,3,1};

    Node* temp = LL;

    for (int i=0; i<sizeof(arr)/4; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    cout << "Linked List Created" << endl;

    SelectionSort(LL);

    while(LL->next!=NULL){
        cout << LL->value << " ";
        LL = LL->next;
    }

}
