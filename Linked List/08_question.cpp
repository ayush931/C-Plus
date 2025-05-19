// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
  int val;
  Node* next;

  Node(int data) {
    val = data;
    next = NULL;
  };
};

class LinkedList {
  public:
  Node* head;

  LinkedList() {
    head = NULL;
  }

  void insertAtTail(int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {   // LinkedList is empty
      head = new_node;
      return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
  }

  void display() {

    Node* temp = head;
    while(temp != NULL) {
      cout << temp->val << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};

Node* reverseKLinked(Node* &head, int k) {
  Node* prevPtr = NULL;
  Node* currPtr = head;

  int counter = 0;  // for counting first k nodes
  while(currPtr != NULL && counter < k) {   // reversing first k nodes
    Node* nextPtr = currPtr->next;
    currPtr->next = prevPtr;
    prevPtr = currPtr;
    currPtr = nextPtr;
    counter++;
  }

  // currPtr will give us (k + 1) node
  if(currPtr != NULL) {
    Node* new_head = reverseKLinked(currPtr, k);  // recursive call
    head->next = new_head;
  }

  return prevPtr;   // prevPtr will give the new_head of connected Linked List.
}

int main() {

  LinkedList ll;
  ll.insertAtTail(1);
  ll.insertAtTail(2);
  ll.insertAtTail(3);
  ll.insertAtTail(4);
  ll.insertAtTail(5);
  ll.insertAtTail(6);
  ll.display();

  ll.head = reverseKLinked(ll.head, 2);
  ll.display();

  return 0;
}