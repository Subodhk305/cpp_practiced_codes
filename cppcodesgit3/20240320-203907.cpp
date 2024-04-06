#include<iostream>
using namespace std;
struct node {
    int data;
    node*lchild;
    node*rchild;
};
node *insert(node *root, int data) {
    node*newnode;
    if(root==nullptr) {
        newnode=new node;
        newnode->data=data;
        newnode->lchild=newnode->rchild=nullptr;

    }
    else if(data<root->data) {
        root->lchild=insert(root->lchild,data) ;
    }
    else {
        root->rchild=insert(root->rchild,data) ;
    }
    return newnode;
}

void inorder(node*p) {
    if(p==nullptr) {
        return;
    }
    
    inorder(p->lchild);
    cout << "data:"<<p->data<< endl;
    inorder(p->rchild);
}
int main()
{
    node *r=NULL;
    r=insert(r, 23) ;
    insert(r, 9) ;
    insert(r,8) ;
    insert(r,97) ;
    insert(r,96) ;
    inorder(r) ;
    return 0;
}