#include<iostream>
using namespace std;
/*

GENERALIZED LINKED LIST

*/

struct node {
    int tag;
    union {
        int intdata;
        char chardata;
    } data;
    struct node* next;


};

void display(node *head) {
    node* current=head;
    while(current!=nullptr) {
        switch(current->tag) {
        case 1:
            cout << "integer data: "<<current->data.intdata<< endl;
            break;

        case 2:
            cout << "char data: "<<current->data.chardata<< endl;
            break;
        }
        current=current->next;
    }
}
int main()
{   node *node1=new node{1,{23},nullptr} ;

    node *node2=new node{2,{'S'},nullptr} ;

    node1->next=node2;


    display(node1) ;
    delete node1;
    delete node2;
    return 0;
}