#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main()
{   vector<int>a;
    cout << "vector size:"<<a.size()<< endl;
    
    for(int I=1;I<=5;I++) {
    a.push_back(I) ;
    }
    for(auto I:a) {
    cout << I <<"\t";
    }
    cout <<  endl;
    cout << "vector size: " <<a.size()<< endl;
    cout << "capacity: "<<a.capacity()<< endl;
    cout << "max size: "<<a.max_size()<< endl;
    
    cout << "before popping :" << endl;
   // a.pop_front();
    
    for(auto I:a) {
    cout << I <<"\t";
    }
    
    cout << "after popping from back" << endl;
    a.pop_back() ;
    
    for(auto I:a) {
    cout << I <<"\t";
    }
    cout <<  endl;
    for(auto it=a.begin();it!=a.end();++it) {
    cout << *it <<"\n";
    }
    
    
    return 0;
}