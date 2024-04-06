#include<iostream>
using namespace std;
struct node {
    int data;
    node*lchild;
    node*rchild;
};
node *Rinsert(node *root, int data) {
    node*newnode;
    if(root==nullptr) {
        newnode=new node;
        newnode->data=data;
        newnode->lchild=newnode->rchild=nullptr;

    }
    else if(data<root->data) {
        root->lchild=Rinsert(root->lchild,data) ;
    }
    else {
        root->rchild=Rinsert(root->rchild,data) ;
    }
    return newnode;
}

void insert(node *r, int data) {
    struct node *p=r;
    struct node*z=NULL;
    struct node *m=NULL;
    if(r==NULL) {
        node *newn=new node;
        newn->data=data;
        newn->lchild=newn->rchild=NULL;
        return;
    }
    while(p!=NULL) {
        m=p;
        if(data<p->data) {
            p=p->lchild;
        }
        else if(data>p->data) {
            p=p->rchild;
        }
        else {
            return;
        }

    }
    z=new node;
    z->data=data;
    z->lchild=z->rchild=NULL;
    if(data<m->data) {
        m->lchild=z;
    }
    else {
        m->rchild=z;
    }

}

void preorder(node*p) {
    if(p==nullptr) {
        return;
    }
    cout << "data:"<<p->data<< endl;
    preorder(p->lchild);

    preorder(p->rchild);
}
void inorder(node*p) {
    if(p==nullptr) {
        return;
    }

    inorder(p->lchild);
    cout << "data:"<<p->data<< endl;
    inorder(p->rchild);
}
void postorder(node*p) {
    if(p==nullptr) {
        return;
    }

    postorder(p->lchild);
    postorder(p->rchild);
    cout << "data:"<<p->data<< endl;
}

node *search(node*r,int key) {
    node *p=r;
    while(p!=NULL) {
        if(p->data==key) {
            return p;
        }
        else if(key<p->data) {
            p=p->lchild;
        }
        else {
            p=p->rchild;
        }
    }
    return NULL;
}

int height(struct node*p) {
    int x, y;
    if(p==NULL) {
        return NULL;
    }
    x=height(p->lchild) ;
    y=height(p->rchild) ;
    return x>y? x+1:y+1;
}

struct node *Inpre(struct node *p) {
    if(p==NULL) {
        return NULL;
    }
    while(p!=NULL && p->lchild==NULL) {
        p=p->rchild;
    }
    return p;
}

struct node *Insucc(struct node *p) {
    if(p==NULL) {
        return NULL;
    }
    while(p!=NULL && p->lchild==NULL) {
        p=p->lchild;
    }
    return p;
}

struct node *dele(struct node *p, int key) {
    struct node *q=p;
    if(p==NULL) {
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL) {
        free(p) ;
        return NULL;
    }

    if(key<p->data) {
        p->lchild=dele(p->lchild,key) ;
    }
    else if(key>p->data) {
        p->rchild=dele(p->rchild,key) ;
    }
    else {
        if(height(p->lchild)>height(p->rchild)) {
            q=Inpre(p->lchild) ;
            p->data=q->data;
            p->lchild=dele(p->lchild,q->data) ;
        }
        else {
            q=Insucc(p->rchild) ;
            p->data=q->data;
            p->rchild=dele(p->rchild,q->data) ;

        }

    }
    return p;
}
int main()
{
    node *r=NULL;
    r=Rinsert(r, 23) ;
    Rinsert(r, 9) ;
    Rinsert(r,8) ;
    Rinsert(r,97) ;
    Rinsert(r,96) ;
    insert(r, 99) ;
    dele(r, 99) ;
    cout << "\n\npreorder:" << endl;
    preorder(r) ;
    cout << "\n\npostorder:" << endl;
    postorder(r) ;
    cout << "\n\ninorder:" << endl;
    inorder(r) ;
    cout << "enter element to be searched :" << endl;
    int h;
    cin>>h;
    node *c=search(r,h) ;
    if(c==NULL) {
        cout << "element absent" << endl;
    }

    else {
        cout << "element present" << endl;
    }
    //dele(r, 99) ;
    return 0;
}