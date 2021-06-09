#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>
using namespace std;
 
class Node{
    
        int value;
        Node* next;

    public:
        Node();
        Node(int);
        int getValue();
        Node* getNext();
        void setValue(int value);
        void setNext(Node* next);
        void poner_sig(Node *n);
        void print();
        ~Node();
};
 
#endif // __NODE_H__