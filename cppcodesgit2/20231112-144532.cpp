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
int main()
{   int A[]= {12,13,56,78,99};
    create(A, 5) ;
    display(first) ;
    cout <<"sum:"<< sum(first)<<endl ;
    cout << "number of nodes:"<<counter(first)<< endl;
    return 0;
}