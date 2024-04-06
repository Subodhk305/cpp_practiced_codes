#include<iostream>
#include<queue>
#include<string>
using namespace std;

void addjob( queue<string>&jobqueue,const string&job) {
  jobqueue.push(job) ;
  cout << "added successfully" << endl;
}

void dele(queue<string>&jobqueue) {
 if(!jobqueue.empty()) {
  cout << "popped element:"<<jobqueue.front()<< endl;
  jobqueue.pop() ;
 }
 else{
 cout << "queue is empty" << endl;
 }
 
}

void display(queue<string>&jobqueue) {
 if(!jobqueue.empty()) {
   cout << "queue contents:" << endl;
   queue<string>temp=jobqueue;
   
   while(!temp.empty()) {
    cout << temp.front()<< endl;
    temp.pop() ;
   }
 }
 else{ 
  cout << "queue is empty" << endl;
 }
}
int main()
{   queue<string>jobqueue;

    addjob(jobqueue,"electrician") ;
   // display(jobqueue) ;
    addjob(jobqueue,"software") ;
    cout << "-----------------------" << endl;
    display(jobqueue) ;
    cout << "-----------------------" << endl;
    dele(jobqueue) ;
    
   cout << "-----------------------" << endl;
    display(jobqueue) ;
    return 0;
}