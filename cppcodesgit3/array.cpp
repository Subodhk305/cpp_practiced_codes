#include<iostream>
#include<array>
using namespace std;

int main()
{   array<int,5>a={1,2,3,9,5};
    
    for(auto I:a) {
    cout << I <<"\t";
    }
    cout <<endl;
    cout << "size of array: "<<a.size()<< endl;
    
    sort(a.begin(),a.end()) ;
    
    for(auto I:a) {
    cout << I <<"\t";
    }
    return 0;
}