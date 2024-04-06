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
    
    
    return 0;
}