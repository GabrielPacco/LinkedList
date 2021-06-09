#include <iostream>
#include "Node.h"
using namespace std;

Node::Node(){
    value = 0;
    next = NULL;
}

Node::Node(int new_value){
    value = new_value;
    next = NULL;

}

int Node :: getValue(){
    return this-> value;
}

Node* Node :: getNext(){
    return this->next;
}

void Node :: setValue(int new_value){
    this->value= new_value;
}


void Node :: setNext(Node* new_next){
    this->next= new_next;
}

void Node :: print(){
    cout<< getValue() <<" ";

}
void Node :: poner_sig(Node *n) {next = n;}

Node :: ~Node(){}