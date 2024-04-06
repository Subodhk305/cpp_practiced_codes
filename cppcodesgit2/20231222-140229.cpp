#include<iostream>
#include<stdio.h>
using namespace std;

struct node {
    int coeff;
    int exp;
    struct node *next;
}*first=NULL;

// Function to create a polynomial
void createPoly(int coeff[], int exp[], int n) {
    struct node *t, *last;
    first = (struct node*)malloc(sizeof(struct node));
    first->coeff = coeff[0];
    first->exp = exp[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {
        t = (struct node*)malloc(sizeof(struct node));
        t->coeff = coeff[i];
        t->exp = exp[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function to display a polynomial
void displayPoly(struct node *p) {
    while (p != NULL) {
        cout << p->coeff << "x^" << p->exp;
        if (p->next != NULL)
            cout << " + ";
        p = p->next;
    }
    cout << endl;
}

// Function to add two polynomials
struct node* addPolynomials(struct node* poly1, struct node* poly2) {
    struct node* res = NULL;
    struct node* last = NULL;

    while (poly1 != NULL || poly2 != NULL) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->next = NULL;

        if (poly1 == NULL) {
            temp->coeff = poly2->coeff;
            temp->exp = poly2->exp;
            poly2 = poly2->next;
        } else if (poly2 == NULL) {
            temp->coeff = poly1->coeff;
            temp->exp = poly1->exp;
            poly1 = poly1->next;
        } else {
            if (poly1->exp > poly2->exp) {
                temp->coeff = poly1->coeff;
                temp->exp = poly1->exp;
                poly1 = poly1->next;
            } else if (poly1->exp < poly2->exp) {
                temp->coeff = poly2->coeff;
                temp->exp = poly2->exp;
                poly2 = poly2->next;
            } else {
                temp->coeff = poly1->coeff + poly2->coeff;
                temp->exp = poly1->exp;
                poly1 = poly1->next;
                poly2 = poly2->next;
            }
        }

        if (res == NULL) {
            res = temp;
            last = temp;
        } else {
            last->next = temp;
            last = temp;
        }
    }

    return res;
}

// Function to multiply two polynomials
struct node* multiplyPolynomials(struct node* poly1, struct node* poly2) {
    struct node* res = NULL;

    while (poly1 != NULL) {
        struct node* temp = NULL;
        struct node* last = NULL;

        struct node* temp1 = poly2;

        while (temp1 != NULL) {
            struct node* term = (struct node*)malloc(sizeof(struct node));
            term->next = NULL;
            term->coeff = poly1->coeff * temp1->coeff;
            term->exp = poly1->exp + temp1->exp;

            if (temp == NULL) {
                temp = term;
                last = term;
            } else {
                last->next = term;
                last = term;
            }

            temp1 = temp1->next;
        }

        res = addPolynomials(res, temp);
        poly1 = poly1->next;
    }

    return res;
}

int main() {
    int coeff1[20];
    int exp1[20];
    cout << "enter number of terms in polynomail 1:" << endl;
    int m;
    cin>>m;
    for(int I=0;I<m;I++) {
     cout << "enter coefficient "<<I<<": and exponent "<<I<<" :"<< endl;
     cin>>coeff1[I]>>exp1[I];
    }
    

    int coeff2[20];
    int exp2[20];
    cout << "enter number of terms in polynomail 1:" << endl;
    int z;
    cin>>z;
    for(int I=0;I<z;I++) {
     cout << "enter coefficient "<<I<<": and exponent "<<I<<" :"<< endl;
     cin>>coeff2[I]>>exp2[I];
    }

    createPoly(coeff1, exp1, m);
    cout << "Polynomial 1: ";
    displayPoly(first);

    createPoly(coeff2, exp2, z);
    cout << "Polynomial 2: ";
    displayPoly(first);

    struct node* sum = addPolynomials(first, first);
    cout << "Sum of Polynomials: ";
    displayPoly(sum);

    struct node* product = multiplyPolynomials(first, first);
    cout << "Product of Polynomials: ";
    displayPoly(product);

    return 0;
}
