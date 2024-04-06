#include<iostream>
using namespace std;

void revnum() {
int n;
cout << "enter number to be reversed:" << endl;
cin>>n;
int rev=0;
while(n!=0) {
 rev=(rev*10)+(n%10); 
 n=n/10;
}
cout << "reversed number:"<<rev << endl;
}
int main()
{   revnum() ;
int p=100;
    int *a=&p;
    int *b=a;
    p=1;
    
   // delete a;
    cout << *b<< endl;
    return 0;
}