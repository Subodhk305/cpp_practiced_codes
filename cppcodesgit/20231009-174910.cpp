#include<iostream>
#include<cmath>
using namespace std;

int main()
{int m,n;
    string y;
    do{
    cout << "enter no. to check if it is perfect square or not:" << endl;
    
    cin>>n;
    m=sqrt(n) ;
    if(m*m==n) {
    cout << "it is perfect square" << endl;
    }
    else{
    cout << "it is not a perfect square" << endl;
    }
    cout << "do yo want to continue if yes then type yes" << endl;
    cin>>y;
    }
    
    while(y=="yes");
    return 0;
}