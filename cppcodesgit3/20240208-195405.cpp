#include<iostream>
using namespace std;


struct node {
    int data;
    node*left;
    node*right;
    bool isthread;
};
node*leftmost(node*no);
node* createnode(int d) {
    node*newnode=new node;
    newnode->data=d;
    newnode->left=newnode->right=nullptr;
    newnode->isthread=false;
    return newnode;

}

void in_order(node*root) {
    node *cur=leftmost(root) ;
    
    while(cur!=nullptr) {
        cout << "value:"<<cur->data<< endl;

        if(cur->isthread) {
            cur=cur->right;
        }
        else {
            cur=leftmost(cur->right) ;
        }
    }
}

node*leftmost(node*no) {

    if(no==nullptr) {
        return nullptr;
    }
    while(no->left!=nullptr) {
        no=no->left;
    }
    return no;
}

node *createthreadbintree(node*root, int p) {
    if(root==nullptr) {
        return createnode(p) ;
    }
    else if(p<root->data) {
        root->left=createthreadbintree(root->left,p) ;
    }
    else if(p>root->data) {
        node *success=createthreadbintree(root->right,p);
        success->right=root->right;
        success->isthread=true;
        root->right=success;

    }
    return root;
}
int main()
{   node *root=nullptr;
    root=createthreadbintree(root,23) ;
    cout << "enter no. of node to be added in the binary tree" << endl;
    int m=0,z=0;
    cin>>m;
    int c=0;
    for(int I=m; I>0; I--) {
        cout << "enter data of node"<<++c<<":" << endl;
        cin>>z;
        root=createthreadbintree(root,z) ;
    }
    cout << "in order traversal is :" << endl;
    in_order(root) ;
    return 0;
}