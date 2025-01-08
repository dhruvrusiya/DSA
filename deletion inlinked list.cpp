#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        cout << "\nNode created with data: " << data;
    }
};

// Function to display the linked list
void display(Node *head) {
    Node *temp = head;
    cout << "\nSingly linked list data:\n";
    while (temp != NULL) {
        cout << temp->data << " ===> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to delete a node at a specific position
Node *deleteAtPos(Node *head, int pos) {
    if (head == NULL) {
        cout << "\nThe list is empty. Nothing to delete.\n";
        return head;
    }

    if (pos == 1) {  // Deleting the head node
        Node *temp = head;
        head = head->next;
        cout << "\nNode with data " << temp->data << " deleted from position " << pos << ".\n";
        delete temp;
        return head;
    }

    Node *prev = head;
    for (int i = 1; i < pos - 1 && prev->next != NULL; i++) {
        prev = prev->next;  // Traverse to the (pos - 1)th node
    }

    if (prev->next == NULL) {  // Invalid position
        cout << "\nInvalid position! No node to delete.\n";
        return head;
    }

    Node *temp = prev->next;  // Node to be deleted
    prev->next = temp->next;  // Update pointer to skip the node
    cout << "\nNode with data " << temp->data << " deleted from position " << pos << ".\n";
    delete temp;  // Free memory
    return head;
}

int main() {
    // Create initial nodes
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    // Link the nodes
    Node *head = first;  // Head points to the first node
    head->next = second;  // First node points to the second
    head->next->next = third;  // Second node points to the third
    head->next->next->next = fourth;

    // Display the initial linked list
    display(head);

    // Delete a node at position 2
    head = deleteAtPos(head, 4);

    // Display the updated linked list
    display(head);

    // Delete the head node
    head = deleteAtPos(head, 1);

    // Display the updated linked list
    display(head);

    return 0;
}
