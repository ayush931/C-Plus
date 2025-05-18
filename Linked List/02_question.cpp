// Insertion at kth position in a singly linked list.

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
  int val;
  Node* next;

  Node(int data) {
    val = data;
    next = NULL;
  }
};

void insertAtHead(Node* &head, int val) {

  Node* new_node = new Node(val);
  new_node->next = head;
  head = new_node;
};

void insertAtPosition(Node* &head, int pos, int val) {

  if (pos == 0) {
    insertAtHead(head, val);
    return ;
  }

  Node* new_node = new Node(val);
  Node* temp = head;
  int current_pos = 0;

  while(current_pos != pos - 1) {
    temp = temp->next;
    current_pos++;
  }

  // temp is pointing to the node at position -1.
  new_node->next = temp->next;
  temp->next = new_node;
};

void insertAtTail(Node* &head, int val) {

  Node* new_node = new Node(val);
  Node* temp = head;

  while(temp->next != NULL) {
    temp = temp->next;
  }

  // temp has reached last node
  temp->next = new_node;
};

void updateAtPosition(Node* &head, int pos, int val) {

  Node* temp = head;
  int current_pos = 0;

  while (current_pos != pos) {
    temp = temp->next;
    current_pos++;
  }

  // temp will be pointing to the kth node
  temp->val = val;
}

void deleteAtHead(Node* &head) {
  Node* temp = head;
  head = head->next;
  free(temp);
}

void deleteAtTail(Node* &head) {

  Node* second_last = head;
  while(second_last->next->next != NULL) {
    second_last = second_last->next;
  }

  // now second_last points to second last node
  Node* temp = second_last->next; // node to be deleted
  second_last->next = NULL;
  free(temp);
};

void deleteAtPosition(Node* &head, int pos) {

  if(pos == 0) {
    deleteAtHead(head);
    return;
  }

  int current_pos = 0;
  Node* prev = head;
  while(current_pos != pos - 1) {
    prev = prev->next;
    current_pos++;
  }

  // prev is pointing to the pos - 1.
  Node* temp = prev->next; // node to be deleted
  prev->next = prev->next->next;
  free(temp);
};

void display(Node* head) {

  Node* temp = head;
  while(temp != NULL) {
    cout << temp->val << "->";
    temp = temp->next;
  }

  cout << "NULL" << endl;
};

int main() {

  Node* head = NULL;
  insertAtHead(head, 2);
  display(head);

  insertAtHead(head, 1);
  display(head);

  insertAtTail(head, 3);
  display(head);

  insertAtPosition(head, 1, 3);
  display(head);

  updateAtPosition(head, 3, 5);
  display(head);

  deleteAtHead(head);
  display(head);

  deleteAtTail(head);
  display(head);

  deleteAtPosition(head, 1);
  display(head);

  return 0;
}

// Time complexity (start) -> O(1)
// Time complexity (end) -> O(n)
// Time complexity (end) -> O(1) -> when tail point is given
// Time complexity -> O(n) -> inserting at kth position
// Time complexity -> O(n) -> updating at kth position
// Time complexity -> O(1) -> deleting at head position
// Time complexity -> O(n) -> deleting at tail position
// Time complexity -> O(n) -> deleting at given position