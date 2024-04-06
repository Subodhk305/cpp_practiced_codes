#include<iostream>
using namespace std;
int N=5;
int stack[5];
int top=-1;
int ch;
int counter=0;
void push() {
    int x;
    cout << "enter element to be inserted" << endl;
    cin>>x;
    if(top==N-1) {
        cout << "overflow" << endl;
    }
    else {
        top++;
        stack[top]=x;
        counter++;
    }
}

void pop() {
    if(top==-1) {
        cout << "underflow" << endl;
    }
    else {
        cout << "popped element: " <<stack[top]<< endl;
        top--;
    }

}

void display() {
    if(top==-1) {
        cout << "underflow" << endl;
    }
    top=0;
    while(top<=N-1) {
        cout <<stack[top]<< endl;
        top++;
    }
}

void peek() {
    if(top==-1) {
        cout << "underflow" << endl;
    }
    else {
        cout << "element at top:"<<stack[top]<< endl;
    }
}


int main()
{   do {
        cout << "STACK" << endl;
        cout << "FOLLOWING OPERATIONS ARE ALLOWED:" << endl;
        cout << "1.)insert element" << endl;
        cout << "2.)delete element" << endl;
        cout << "3.)refer top element" << endl;
        cout << "4.)display contents of stack" << endl;
        cout << "enter response:" << endl;
        int p;
        cin>>p;

        switch(p) {
        case 1:
            cout << "you can insert 5 elements " << endl;
            
            while(counter<5) {
                push();
            }
            break;
        case 2:
            pop() ;
            break;

        case 3:
            peek();
            break;
        case 4:
            display() ;
            break;
        default:
            cout << "invalid response" << endl;
        }

        cout << "what to perform again yes(1) no (0):" << endl;
        // int ch;
        cin>>ch;
    }
    while(ch==1) ;
    return 0;
}