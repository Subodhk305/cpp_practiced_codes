#include<iostream>
#include<stdio.h>
using namespace std;

struct node {
    int coeff;
    int exp;
    struct node *next;
};

struct node*createPoly(int coeff[],int exp[],int n) {
    struct node*first, *last, *t;
    first=(struct node*)malloc(sizeof(struct node)) ;
    first->coeff=coeff[0];
    first->exp=exp[0];
    first->next=NULL;
    last=first;

    for(int I=1; I<n; I++) {
        t=(struct node*)malloc(sizeof(struct node)) ;
        t->coeff=coeff[I];
        t->exp=exp[I];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    return first;
}

void displayPoly(struct node*re) {
    struct node *temp=re;
    while(temp!=0) {
        cout <<temp->coeff<<"x^"<<temp->exp;
        if(temp->next!=NULL) {
            cout << "+";
        }
        temp=temp->next;
        
    }
    cout <<  endl;

}

struct node*addPolynomials(struct node*poly1, struct node*poly2) {

    struct node*last=NULL, *res=NULL;
    while(poly1!=NULL || poly2!=NULL) {
        struct node*temp= (struct node*)malloc(sizeof(struct node)) ;
        temp->next=0;
        if(poly1==NULL) {
            temp->coeff=poly2->coeff;
            temp->exp=poly2->exp;
            poly2=poly2->next;
        }
        else if(poly2==NULL) {
            temp->coeff=poly1->coeff;
            temp->exp=poly1->exp;
            poly1=poly1->next;
        }
        else {
            if(poly1->exp>poly2->exp) {
                temp->coeff=poly1->coeff;
                temp->exp=poly1->exp;
                poly1=poly1->next;
            }
            else if(poly1->exp<poly2->exp) {
                temp->coeff=poly2->coeff;
                temp->exp=poly2->exp;
                poly2=poly2->next;
            }
            else {
                temp->coeff=poly1->coeff+poly2->coeff;
                temp->exp=poly1->exp;
                poly2=poly2->next;
                poly1=poly1->next;

            }


        }

    
    if(res==NULL) {
        res=temp;
        last=temp;
    }
    else {
        last->next=temp;
        last=temp;
    }
    }
    return res;
}

struct node*multiplyPolynomials(struct node*poly1, struct node*poly2) {
    struct node*last=NULL, *res=NULL, *term,*temp=NULL;
    struct node*temp1=poly2;
    while(poly1!=NULL) {
        term=(struct node*)malloc(sizeof(struct node)) ;
        while(temp1!=NULL) {
            term->coeff=poly1->coeff*temp1->coeff;
            term->exp=poly1->exp+temp1->exp;

            if(temp==NULL) {
                temp=term;
                last=term;
            }
            else {

                last->next=term;
                last=term;
            }


            temp1=temp1->next;
        }
        res=addPolynomials(res, temp);
        poly1=poly1->next;
    }
    return res;
}

int main() {
    int coeff1[20];
    int exp1[20];
    cout << "enter number of terms in polynomial 1:" << endl;
    int m;
    cin>>m;
    for(int I=0; I<m; I++) {
        cout << "enter coefficient "<<I<<": and exponent "<<I<<" :"<< endl;
        cin>>coeff1[I]>>exp1[I];
    }

    int coeff2[20];
    int exp2[20];
    cout << "enter number of terms in polynomial 2:" << endl;
    int z;
    cin>>z;
    for(int I=0; I<z; I++) {
        cout << "enter coefficient "<<I<<": and exponent "<<I<<" :"<< endl;
        cin>>coeff2[I]>>exp2[I];
    }

    struct node* first1 = createPoly(coeff1, exp1, m);
    cout << "Polynomial 1: ";
    displayPoly(first1);

    struct node* first2 = createPoly(coeff2, exp2, z);
    cout << "Polynomial 2: ";
    displayPoly(first2);

    struct node* sum = addPolynomials(first1, first2);
    cout << "Sum of Polynomials: ";
    displayPoly(sum);

    struct node* product = multiplyPolynomials(first1, first2);
    cout << "Product of Polynomials: ";
    displayPoly(product);

    return 0;
}
    