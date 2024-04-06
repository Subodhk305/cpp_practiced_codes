#include<iostream>
#include<stdlib.h>
#include<stdio.h>
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

    for(int I=1; I<n; I++) {
        t=(struct node*) malloc(sizeof(struct node )) ;
        t->data=A[I];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node*p) {
    while(p!=NULL) {
        cout <<"value:"<<( p->data)<<endl;
        printf(" address:%u\n",p->next);
        p=p->next;
    }
}

int count(struct node *p) {
    int count=0;
    while(p) {
        count++;
        p=p->next;
    }
    return count;
}

int sum(struct node *p) {
int s=0;
while(p) {
s+=p->data;
p=p->next;
}
return s;
}
int main()
{
    int A[]= {12,23,24,25,37,47};
    create(A,6) ;
    display(first) ;
    cout << endl;
    cout << "number of nodes:"<<count(first)<<endl ;
    
    int j=sum(first) ;
    cout << endl;
    cout << "addtion of data in does is:"<<j<< endl;
    return 0;
}