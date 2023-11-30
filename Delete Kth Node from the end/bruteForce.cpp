#include<iostream>
using namespace std;

// Node definition for a linked list
struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

// Function to delete the kth node from the end of a linked list
Node* deleteKthFromEnd(Node* head, int k) {
    int n = 0;
    int l = k;
  Node * start = head;
  while(head->next != NULL)
  {
      n++;
      head = head->next;
  }
  int m = n - l;
  Node * dummy = head;
  for(int i=1; i<m; i++)
  {
      dummy = dummy->next;
  }
  Node * temp = dummy->next;
  dummy->next = dummy->next->next;
  delete (temp);
  return  head;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;
    
    cout << "Original List: ";
    printList(head);

    head = deleteKthFromEnd(head, k);

    cout << "List after deleting the " << k << "th node from the end: ";
    printList(head);

    // Clean up the allocated memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
