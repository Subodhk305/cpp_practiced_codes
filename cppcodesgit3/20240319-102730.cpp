#include<iostream>
using namespace std;

class Threaded_tree{
public:
typedef struct bst{
int data;
int lth, rth;
struct bst *left, right;
}node;

node *root,*temp, *New, *dummy;

void create() {
 New =new node;
 New->lth=New->rth=0;
 New->left=New->right=NULL;
 cout << "enter data: " << endl;
 cin>>New->data;
 
 if(root==NULL) {
 root=New;
 dummy=new node;
 dummy->data=-999;
 dummy->lth=dummy->rth=0;
 dummy->left=root;
 root->left=dummy;
 root->right=dummy;
 }
 else{
 insert(root,New) ;
 }
}

void display() {
if(root==NULL) {
cout << "tree is absent! " << endl;
}
else{
cout << "inorder: " << endl;
inorder(root, dummy) ;
}

}

void insert(node*root, node*New) {
if(root->data>New->data) {
 if(New->lth==0) {
  
 
 }

}

}
};
int main()
{
    
    return 0;
}