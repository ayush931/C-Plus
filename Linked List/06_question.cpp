// Given the head of a singly linked list, reverse the list, and return the reversed list.

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

Node* reverseList(Node* &head) {
  
  Node* prevPtr = NULL;
  Node* currPtr = head;

  // currPtr->next = prevPtr;
  // move all 3 ptrs by one step ahead
  
  while(currPtr != NULL) {
    Node* nextPtr = currPtr->next;
    currPtr->next = prevPtr;
    prevPtr = currPtr;
    currPtr = nextPtr;
  }

  // when this loop ends, prevPtr pointing to my last node which is new head
  Node* new_head = prevPtr;
  return prevPtr;
};

int main() {

  LinkedList ll;
  ll.insertAtTail(1);
  ll.insertAtTail(2);
  ll.insertAtTail(2);
  ll.insertAtTail(3);
  ll.insertAtTail(3);
  ll.insertAtTail(4);
  ll.display();
  
  ll.head = reverseList(ll.head);
  ll.display();

  return 0;
}