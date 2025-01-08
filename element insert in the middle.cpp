#include <iostream>
using namespace std;

class Node {
public:
    int data;  // Data part of the node
    Node *next;  // Pointer to the next node

    Node(int data) {
        this->data = data;
        this->next = NULL;  // Initialize the next pointer to NULL
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



// Function to add a node at a specific position in the linked list
Node *addAtpos(Node *head, int pos, int data) {
    Node *newNode = new Node(data);

    if (pos == 1) {  // If position is 1, insert at the beginning
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;  // Move to the (pos - 1)th node
    }

    if (temp == NULL) {
        cout << "\nInvalid position!\n";
        delete newNode;  // Clean up the allocated memory
        return head;
    }

    newNode->next = temp->next;  // Insert the new node
    temp->next = newNode;

    cout << "\nNode added successfully at position " << pos << ".\n";
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

 
    // Add a node at position 3
    head = addAtpos(head, 3, 55);

    // Display the updated linked list
    display(head);

    return 0;
}
