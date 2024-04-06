#include<iostream>
using namespace std;
#define max 50

int parlor[max];
int front=-1;
int rear=-1;
bool isfull() {
    return (front==(rear+1)%max);
}

bool isempty() {
    return (front==-1 && rear==-1);
}

void enqueue(int data) {
    if(isfull()) {
        cout << "full of orders" << endl;
    }
    else if(isempty()) {
        front=rear=0;
        parlor[rear]=data;
    }
    else {
        rear=(rear+1) %max;
        parlor[rear]=data;
    }
}

void dequeue() {
    if(isempty()) {
        cout << "queue is empty" << endl;
    }
    else if(front==rear) {
        front=rear=-1;
    }
    else {
        front=(front+1) %max;
    }
}

void display() {
    if(isempty()) {
        cout << "queue is empty" << endl;
    }
    else {
        int I=front;
        while(I!=rear) {
            cout << parlor[I]<< endl;
            I=(I+1)%max;
        }
        cout <<parlor[rear]<< endl;
    }
}


int main()
{   enqueue(1) ;
    enqueue(2) ;
    enqueue(3) ;
    enqueue(4) ;
    cout << "-----------------------" << endl;
    display() ;
    cout << "-----------------------" << endl;
    dequeue() ;
    
    display() ;
    return 0;
}