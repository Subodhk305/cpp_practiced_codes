#include<iostream>
using namespace std;
/*

GENERALIZED LINKED LIST

*/

struct node{
int tag;
union{
 int intdata;
// long int floatdata;
 char chardata;
}data;
 struct node* next;
 
 
};

void display(node *head) {
 node* current=head;
 while(current!=nullptr) {
  switch(current->tag) {
   case 1:
     cout << "integer data: "<<current->data.intdata<< endl;
     break;
  // case 2:
//     cout << "long int data: "<<current->data.floatdata<< endl;
//     break;
   case 3:
     cout << "char data: "<<current->data.chardata<< endl;
     break;
  }
  current=current->next;
 }
}
int main()
{   node *node1=new node{1,{23},nullptr} ;
   // node *node2=new node{2,{838292920020},nullptr} ;
    node *node3=new node{3,{'S'},nullptr} ;
    
    node1->next=node3;
  //  node2->next=node3;
    
    display(node1) ;
    delete node1;
  //  delete node2;
    delete node3;
    return 0;
}