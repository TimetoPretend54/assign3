/**
 * CS 383
 * Group #4
 * Creation Date: 10/22/2016
 * 
 * This is the header file for the LinkedList class. It also defines
 * a struct for nodes within the list.
 */

#ifndef LIST_H
#define LIST_H
/**
 * Struct defining a node for the LinkedList. 
 * data {int} node data value
 * next {node*} pointer to the next node in the list. 
 */
struct node{
   int data;
   node *next;
};
typedef struct node *nodePtr;
/**
 * Class definition for a LinkedList. The class defines a list of nodes
 * that contain integer values. 
 */
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
