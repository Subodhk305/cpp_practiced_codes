#include<iostream>
using namespace std;

class Threaded_tree {
public:
    typedef struct bst {
        int data;
        int lth, rth;
        struct bst *left,*right;
    } node;

    node *root,*temp, *New, *dummy;
    Threaded_tree() {
        root=NULL;
    }
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
            //     dummy->lth=dummy->rth=0;
            dummy->left=root;
            root->left=dummy;
            root->right=dummy;
        }
        else {
            insert(root,New) ;
        }
    }

    void display() {
        if(root==NULL) {
            cout << "tree is absent! " << endl;
        }
        else {
            cout << "inorder: " << endl;
            inorder(root, dummy) ;
        }

    }

    void insert(node*root, node*New) {
        if(root->data>New->data) {
            if(root->lth==0) {

                New->left=root->left;
                New->right=root;
                root->left=New;
                root->lth=1;
            }
            else {
                insert(root->left,New) ;
            }

        }
        if(root->data<New->data) {
            if(root->rth==0) {

                New->left=root;
                New->right=root->right;
                root->right=New;
                root->rth=1;
            }
            else {
                insert(root->right,New) ;
            }

        }
    }


    void inorder(node* temp, node* dummy) {
        while (temp != dummy) {
            while (temp->lth == 1) {
                temp = temp->left;
            }
            cout << " " << temp->data << endl;
            while (temp->rth == 0) {
                temp = temp->right;
                if (temp == dummy) {
                    return;
                }
                cout << " " << temp->data << endl;
            }

            temp = temp->right;
        }

    }
};
int main()
{   Threaded_tree th;
    int n=0;
    do {
        th.create() ;
        cout << "do you want to create more node? (1/0)" << endl;
        cin>>n;
    } while(n==1) ;

    th.display() ;

    return 0;
}