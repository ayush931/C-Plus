// Given the heads of two singly linked lists head A and head B, return the node at which the two list intersect. If the two linked lists have no intersection at all, return null.

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

int getLength(Node* head) {
  
  Node* temp = head;
  int length = 0;

  while(temp != NULL) {
    length++;
    temp = temp->next;
  }

  return length;
}

Node* getIntersection(Node* head1, Node* head2) {

  // step 1: calculate lengths of both the linked list


}

int main() {

}