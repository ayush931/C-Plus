// Given head, the head of linked list, determine if the linked list has a cycle in it.

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

bool detectCycle(Node* head) {
  if (!head) {
    return false;
  }

  Node* slow = head;
  Node* fast = head;

  while(fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) {
      cout << slow->val << endl;
      return true;
    }
  }

  return false;
};

int main() {

  LinkedList ll1;
  ll1.insertAtTail(1);
  ll1.insertAtTail(2);
  ll1.insertAtTail(3);
  ll1.insertAtTail(4);
  ll1.insertAtTail(5);
  ll1.insertAtTail(6);
  ll1.insertAtTail(7);
  ll1.insertAtTail(8);
  ll1.display();

  ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
  cout << detectCycle(ll1.head) << endl;

  return 0;
}