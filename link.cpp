#include <iostream>
#include "list.h"

using namespace std;

LinkedList::LinkedList()
{
   head = NULL;
   count = 0;
}

LinkedList::~LinkedList()
{
   nodePtr p = head, n;
   while (p != NULL)
   {
      n = p;
      p = p->next;
      delete n;
   }
}

//  Add an item to the FRONT of the list
void LinkedList::addNode(int val)
{
    nodePtr n;
    n = new node;
    n->data = val;
    count++;

    if(head == NULL)
    {
        head = n;
        n->next = NULL;
    }
    else
    {
        nodePtr tmp = head;
        n->next = tmp;
        head = n;
    }
}

void LinkedList::removeNode(int val)
{
    nodePtr prev, curr;
    curr = head;
    while( curr != NULL && val > curr->data )
    {
        prev = curr;
        curr = curr->next;
    }
    if( val == curr->data )
    {
        if( curr == head )
            head = head->next;
        else
            prev->next = curr->next;
        delete curr;
        count--;
    }
}

bool LinkedList::isEmpty()
{
   if(count == 0)
      return true;
   else
      return false;
}

void LinkedList::printList()
{
    nodePtr p = head;
    while(p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
