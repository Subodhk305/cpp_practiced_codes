#include<iostream>
using namespace std;

struct node {
    int data;
    struct node*left,*right;
};

struct node*create() {
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int a;
    cout << "enter data(-1 if absent):"<< endl;
    cin>>a;
    if(a==-1) {
        return 0;
    }
    newnode->data=a;
    cout << "enter left child of"<<a << endl;
    newnode->left=create() ;
    cout << "enter right child of"<<a << endl;
    newnode->right=create() ;

    return newnode;
}

void preorder(struct node*p) {
    if(p==0) {
        return;
    }
    cout<<p->data<<"\t";
    preorder(p->left) ;
    preorder(p->right);

}
void inorder(struct node*p) {
    if(p==0) {
        return;
    }
    
    
    inorder(p->left) ;
    cout<<p->data<<"\t";
    inorder(p->right);

}
void postorder(struct node*p) {
    if(p==0) {
        return;
    }
    
    postorder(p->left) ;
    postorder(p->right);
    cout<<p->data<<"\t";
}
int main()
{   struct node*root;
    root=0;
    root=create() ;
    cout << "preorder:" << endl;
    preorder(root) ;
    cout << "\ninorder:" << endl;
    inorder(root) ;
    cout << "\npostorder:" << endl;
    postorder(root) ;
    return 0;
}