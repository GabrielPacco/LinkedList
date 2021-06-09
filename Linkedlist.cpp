#include <iostream>
#include "Linkedlist.h"
using namespace std;

Linkedlist :: Linkedlist(){
    size = 0;
    head = NULL;
}

Linkedlist::Linkedlist(int new_value){
    head = new Node(new_value);
    size = 1;
}

void Linkedlist::insert(int new_value){
    Node *new_node = new Node(new_value);
    Node *temp = head;
    if(!head)
        head = new_node;
    else{
        if(head -> getValue() > new_value){
            new_node -> setNext(head);
            head = new_node;
        }
        else{
            while((temp->getNext() != NULL) && (temp->getNext()->getValue() < new_value)) {
                temp=temp->getNext();
            }
            new_node->setNext(temp->getNext());
            temp->setNext(new_node);
        }
    }
    size++;

}
void Linkedlist::remove(int pos) {

        // al eliminar desde el principio, cambiar el puntero de inicio
        if (pos == 0) {
            head = head->getNext();
        }

        // Buscar el nodo a eliminar
        else {
            Node *act = head;
            for (int i = 1; act != 0; i ++) {
                if (i == pos) {
                    // eliminar el nodo de destino 
                    act->poner_sig(act->getNext()->getNext());
                    break;
                }
                act = act->getNext();
            }
        }
        size--;
    }
void Linkedlist :: print(){
    Node* temp = head;
    if(!head)
        cout<<"La lista esta vacia"<<endl;
    else{
        while(temp){
            temp->print();
            if(!temp->getNext()) cout<<"NULL";
                temp = temp->getNext();
        }
    }
    cout<<"\n\n";


}

Linkedlist :: ~Linkedlist(){
    Node *temp;
    while(head != NULL){
        temp = head;
        temp = head->getNext();
        delete temp;
    }
}

