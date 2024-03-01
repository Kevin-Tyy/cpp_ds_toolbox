#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int d)
  {
    data = d;
    next = NULL;
  }
};
namespace printer
{
  void printList(Node *head)
  {
    int i;
    for (i = 0; head != NULL; i++)
    {
      cout << head->data << " ";
      head = head->next;
    }
    cout << "Length:" << i;
    cout << endl;
  }
}

int main()
{
  Node *n1 = new Node(12);
  Node *n2 = new Node(14);
  Node *n3 = new Node(18);

  n1->next = n2;
  n2->next = n3;

  Node *head = n1;
  printer::printList(head);
  return 0;
}