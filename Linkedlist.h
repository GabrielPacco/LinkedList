#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include <iostream>
#include <stdio.h>
#include "Node.h"
using namespace std;
 
class Linkedlist{
    private:
        int size;
        Node* head;
    public:
        Linkedlist();
        Linkedlist(int);
        
        
        void insert(int);
        void remove(int);
        void print();

        friend std::ostream& operator <<(std::ostream& o, const Linkedlist& p){
            Node *temp = p.head;
            cout<<"Lista Enlazada "<<endl;
            while (temp != NULL){
                o<<temp->getValue()<<" -> ";
                temp = temp->getNext();
            }
        return o;        
        
    }
    ~Linkedlist();

};

#endif // __LINKEDLIST_H__