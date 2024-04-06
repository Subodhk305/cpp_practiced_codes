#include<iostream>
using namespace std;
struct node {
    int data;
    int lth, rth;
    node*lchild;
    node*rchild;
}
struct node*root=NULL, newnode=nullptr;
void insert( node*root, node*n)

struct node*create() {
    cout << "enter data to be added in node" << endl;
    int data=0;
    cin>>data;
    struct node *newnode=new node();


    newnode->data=data;
    newnode->lth=newnode->rth=0;
    newnode->lchild=newnode->rchild=0;

    if(root==NULL) {
        root=newnode;
        struct node *dummy=new node();
        dummy->data=999;
        dummy->lchild=root;
        dummy->rth=dummy;
        dummy->lth=dummy->rth=1;

    }
    else {
        insert(root,newnode) ;
    }
    cout << "do you want to insert one more node" << endl;
    char c;
    cin>>c;
    if(c=='y'|| c=='Y') {
        create() ;
    }
    return root;

}

void insert(node*root,node*n) {
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