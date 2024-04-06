#include<iostream>
using namespace std;

class Thread {
public:
    typedef struct bst {
        int data;
        int lth, rth;
        struct bst *left, *right;
    } node;

    node *dummy;
    node *New, *root, *temp;
  /*  thread();
    void create();
    void display();
    void insert(node *, node*);
    void inorder(node*, node*);
    */
    Thread() {
        root = NULL;
    }

    void create() {
        New = new node;
        New->lth = New->rth = 0;
        New->left = New->right = NULL;
        cout << "enter data:" << endl;
        cin >> New->data;
        if (root == NULL) {
            root = New;
            dummy = new node;
            dummy->data = -999;
            dummy->left = root;
            root->left = dummy;
            root->right = dummy;
        }
        else {
            insert(root, New);
        }
    }

    void display() {
        if (root == NULL) {
            cout << "tree is not created!!" << endl;

        }
        else {
            cout << "the tree is: " << endl;
            inorder(root, dummy);
        }

    }

    void insert(node* root, node* New) {
        if (New->data < root->data) {
            if (root->lth == 0) {
                New->left = root->left;
                New->right = root;
                root->left = New;
                root->lth = 1;
            }
            else {
                insert(root->left, New);
            }
        }
        if (New->data > root->data) {
            if (root->rth == 0) {
                New->right = root->right;
                New->left = root;
                root->right = New;
                root->rth = 1;
            }
            else {
                insert(root->right, New);
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
{
    Thread th;
    int n = 0;
    do {
        th.create();
        cout << "do you want to create more nodes? (1/0)" << endl;
        cin >> n;
    } while (n == 1);

    th.display();
    return 0;
}