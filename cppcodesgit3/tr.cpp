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

int height(struct node *ne) {
    if (ne ==0) {
        return 0;
    } else {
        int leftHeight = height(ne->left);
        int rightHeight = height(ne->right);

        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}

void printGivenLevel(struct node *r, int level) {
    if (r == 0) {
        return;
    }

    if (level == 1) {
        cout << r->data << "\t";
    } else if (level > 1) {
        printGivenLevel(r->left, level - 1);
        printGivenLevel(r->right, level - 1);
    }
}
void levelorder(struct node *r) {
    if (r ==0) {
        return;
    }

    cout << r->data << "\t";

    for (int level = 2; level <= height(r); level++) {
        printGivenLevel(r, level);
    }
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
    cout << "\nlevel order:" << endl;
    levelorder(root) ;
    
    return 0;
}