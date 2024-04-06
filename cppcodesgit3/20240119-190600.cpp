#include<iostream>
#define n 50
using namespace std;


int queue[n];
int front=-1;
int rear=-1;

void enqueue(int x) {
    if(front ==-1 && rear==-1) {
        front=rear=0;
        queue[rear]=x;
    }
    else if(rear==n-1) {
        cout << "queue is full!!" << endl;
    }

    else {
        rear++;
        queue[rear]=x;
    }
}
void dequeue() {
    if(front ==-1 && rear==-1) {
        cout<<"queue is empty!!"<<endl;
    }
    else if(front ==rear) {
        front=rear=-1;
    }
    else {
        cout << "element deleted:"<<queue[front]<< endl;
        front++;
    }
}

void display() {
    int I=front;
    while(I!=rear) {
        cout << "data:"<< queue[I]<< endl;
        I++;
    }
    cout<<queue[rear]<<endl;
}
bool isEmpty() {
    return (front==-1&&rear==-1);
}
bool isfull() {
    return rear=n-1;
}
int main()
{   enqueue(10) ;
    enqueue(20) ;
    enqueue(30) ;
    enqueue(40) ;
    display() ;
    dequeue() ;
    dequeue() ;
    display() ;
    isEmpty() ;
    isfull() ;
    return 0;
}