#ifndef LIST_H
#define LIST_H

struct node{
   int data;
   node *next;
};
typedef struct node *nodePtr;

class LinkedList{
   private:
      nodePtr head;
      int count;
   public:
      LinkedList();
      ~LinkedList();
      void addNode(int val);
      void removeNode(int val);
      bool isEmpty();
      void printList();
};
#endif
