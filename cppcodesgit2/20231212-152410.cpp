#include<iostream>
using namespace std;


int deque[10];
int n=10;
int front=-1;
int rear=-1;

void enqueue_front(int x) {
    if(front==0&&rear==n-1||front==rear+1) {
        cout << "deque is full" << endl;
    }
    else if(front==-1&&rear==-1) {
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0) {
        front=n-1;
        deque[front]=x;
    }
    else {
        front--;
        deque[front]=x;
    }
}

void enqueue_rear(int x) {
    if(front==0&&rear==n-1||front==rear+1) {
        cout << "deque is full" << endl;
    }
    else if(front==-1&&rear==-1) {
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==n-1) {
        rear=0;
        deque[rear]=x;
    }
    else {
        rear++;
        deque[rear]=x;
    }
}

void dequeue_front() {
    if(front==-1&&rear==-1) {
        cout << "empty deque" << endl;
    }
    else if(front==rear) {
        front=rear=-1;
    }
    else if(front==n-1) {
        front=0;
    }
    else {
        front++;
    }

}
void dequeue_rear() {
    if(front==-1&&rear==-1) {
        cout << "empty deque" << endl;
    }
    else if(front==rear) {
        front=rear=-1;
    }
    else if(rear==0) {
        rear=n-1;
    }
    else {
        rear--;
    }
}

void getfront() {
    if(front==-1&&rear==-1) {
        cout << "empty deque" << endl;
    }
    else {
        cout << "element at front: "<<deque[front]<< endl;
    }

}
void getrear() {
    if(front==-1&&rear==-1) {
        cout << "empty deque" << endl;
    }
    else {
        cout << "element at rear: "<<deque[rear]<< endl;
    }
}

void display() {
    int I=front;
    if(front==-1&&rear==-1) {
        cout << "empty deque" << endl;
    }
    else {
    cout << "-------------------------" << endl;
        cout << "contents:" << endl;
        while(I!=rear) {
            cout << deque[I]<< endl;
            I=(I+1)%n;
        }
    }
    cout << deque[rear]<< endl;
    cout << "-------------------------" << endl;
}
int main()
{   enqueue_front(10);
    enqueue_front(20);
    enqueue_front(30);
    enqueue_front(40);
    enqueue_front(50);
    enqueue_rear(600) ;
    display() ;
    dequeue_front() ;
    dequeue_rear() ;
    getfront() ;
    getrear() ;

    return 0;
}