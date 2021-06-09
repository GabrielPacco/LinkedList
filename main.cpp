#include <iostream>
#include "Linkedlist.h" 
using namespace std;

int main()
{
    Linkedlist L1;
    
    L1.insert(23);
    L1.insert(2);
    L1.insert(6);
    L1.insert(56);
    L1.insert(82);
    L1.insert(9);

    L1.print();

    L1.remove(2);

    L1.print();
    
    cout << L1;

   return 0;
}
