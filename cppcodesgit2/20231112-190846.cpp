#include<iostream>
#include<stdio.h>
using namespace std;

struct node {
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n) {

    struct node *t, *last;
    first=(struct node*) malloc(sizeof(struct node)) ;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int I=1; I<n; I++) {
        t=(struct node*) malloc(sizeof(struct node)) ;
        t->data=A[I];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}

void display(struct node *p) {
    while(p!=NULL) {
        cout << "data" <<p->data<< endl;
        printf("address:%u",p->next) ;
        cout << endl;
        p=p->next;
    }
}

int sum(struct node*p) {
    int sum=0;
    while(p!=NULL) {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int counter(struct node*p) {
    int count=0;
    while(p) {
        count++;
        p=p->next;
    }
    return count;
}

int search(struct node*p, int key) {
    while(p) {
        if(p->data==key) {
            cout << "key found: "<<p->data<< endl;
            return 1;
        }
        p=p->next;
    }
    cout << "key absent" << endl;
    return 0;
}

void insert(struct node*p, int index, int x) {

    struct node *t;
    if(index<0||index>counter(p)) {
        return;
    }
    t=(struct node*) malloc(sizeof(struct node)) ;
    t->data=x;

    if(index==0) {
        t->next=first;
        first=t;
    }
    else {
        for(int I=0; I<index; I++) {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

int max1(struct node *p) {
    int max=INT_MIN;
    while(p!=NULL) {

        if(p->data>max) {
            max=p->data;
        }
        p=p->next;
    }
    return max;
}

void delete1(struct node*p, int in) {
    if(in<0||in>counter(p)) {
        return;
    }
    if(in==0) {
        struct node *temp=p;
        first=p->next;
        free(temp) ;
    }
    else {
        struct node *q=NULL;
        for(int I=0; I<in; I++) {
            q=p;
            p=p->next;
        }
        if(p) {
        q->next=p->next;
        free(p) ;
        }

    }
}
int main()
{   int A[]= {12,13,56,78,99};
    create(A, 5) ;
    display(first) ;
    cout <<"\nsum:"<< sum(first)<<endl ;
    cout << "\nnumber of nodes:"<<counter(first)<< endl;
    cout << "\nsearch 99: " <<search(first,99)<< endl;
    insert(first,0,10) ;
    display(first) ;
    cout << "\nmax element: " <<  max1(first)<<endl;
    
    delete1(first, 0) ;
    cout << endl;
    display(first) ;
    return 0;
}