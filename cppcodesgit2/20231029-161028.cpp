#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n) {
    struct node *t, *last;
    first=(struct node*) malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int I=0; I<n; I++) {
        t=(struct node*) malloc(sizeof(struct node )) ;
        t->data=A[I];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node*p) {
    while(p!=NULL) {
        cout <<"value:"<<( p->data)<<" address:"<<p->next<< endl;
        p=p->next;
    }
}
int main()
{
    int A[]= {12,23,24,25,37,47};
    create(A,6) ;
    display(first) ;
    return 0;
}