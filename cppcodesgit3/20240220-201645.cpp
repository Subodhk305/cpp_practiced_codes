#include<iostream>
using namespace std;
struct node {
    int data;
    int ltg, rth;
    node*lchild;
    node*rchild;
}*root=NULL, newnode;


struct node*create(int data) {
    struct node *newnode=new node();
    do {

        newnode->data=data;
        newnode->lth=newnode->rth=0;
        newnode->lchild=newnode->rchild=0;

        if(root==NULL) {
            struct node *dummy=new node();
            dummy->data=999;
            dummy->lchild=root;
            dummy->rth=dummy;
            dummy->lth=dummy->rth=1;

        }
        else {
            insert(newnode) ;
        }
        cout << "do you want to insert one more node" << endl;
        char c;
        cin>>c;
    } while(c=='y'|| c=='Y') ;

}

void insert(struct node*n) {
    if(root->data==n->data) {
        cout << "duplicate" << endl;
    }
    else if(root->data>n->data) {
        if(root->lchild==NULL) {
            root->lchild=n;
            n->lchild=root->lchild;
            n->rchild=root;
            root->lth=1;
        }
        else {
            insert(root->lchild,n) ;
        }
    }
    else if(root->data<n->data) {
        if(root->rchild==NULL) {
            root->rchild=n;
            n->lchild=root;
            n->rchild=root->rchild;
            root->rth=1;
        }
        else {
            insert(root->rchild,n) ;
        }
    }

}
int main()
{
    

    return 0;
}