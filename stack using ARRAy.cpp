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

// Function to add a node at the end of the linked list
Node *addAtLast(Node *head, int data) {
    Node *newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "\nNode added successfully at the end of the singly linked list.\n";
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

    // Add a new node at the end
    head = addAtLast(head, 50);

    // Display the updated linked list
    display(head);

    return 0;
}
