/* Matthew Holman           10-22-2016
   CS383

   Assignment #3 - stack/ group project
*/

#include <iostream>
#include "list.h"
#include "stack.h"

using namespace std;

int main()
{
    cout << "Linked List Testing: Add to Front - 1, 2, 3, print" << endl << endl;
    LinkedList * llTest = new LinkedList;
    llTest->addNode(1);
    llTest->addNode(2);
    llTest->addNode(3);
    llTest->printList();

    delete llTest;
    cout << endl;

    cout << "Stack Testing: Push - 4, 5, 6, print" << endl << endl;
    Stack * sTest = new Stack;
    sTest->Push(4);
    sTest->Push(5);
    sTest->Push(6);
    sTest->Print();

    cout << endl;

    cout << "Stack Testing: pop, pop, print" << endl << endl;
    sTest->Pop();
    sTest->Pop();
    sTest->Print();

    delete sTest;
    cout << endl;

    return 0;
}
