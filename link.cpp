#include <iostream.h>
#include "link.h"

LinkedList::LinkedList()
{
   nodeptr start = NULL;
   int count = 0;
}

LinkedList::~LinkedList()
{
   nodeptr p = start, n;
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
    nodeptr n;
    n = new node;
    n->data = val;
    count++;

    if(start == NULL)
    {
        start = n;
        n->next = NULL;
    }
    else
    {
        nodeptr tmp = start;
        n->next = tmp;
        start = n;
    }
}

void LinkedList::removeNode(int val)
{
    nodeptr prev, curr;
    curr = start;
    while( curr != NULL && val > curr->data )
    {
        prev = curr;
        curr = curr->next;
    }
    if( val == curr->data )
    {
        if( curr == start )
            start = start->next;
        else
            prev->next = curr->next;
        delete curr;
        count--;
    }
}

bool isEmpty()
{
   if(count == 0)
      return true;
   else
      return false;
}

void LinkedList::printList()
{
    nodeptr p = start;
    while(p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}