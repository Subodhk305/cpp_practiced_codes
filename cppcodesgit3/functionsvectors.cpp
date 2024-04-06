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
    
    for(auto it=a.begin();it!=a.end();++it) {
    cout << *it << "\n";
    }
    
    cout << endl;
    
    for(auto i=a.cbegin();i!=a.cend();++i) {
    cout << *i << "\n";
    }
   cout << endl;
     
  //  for(vector<int>::const_const_iterator i=a.rbegin();i!=a.rend();++i) {
//    cout << *i << "\n"    }
    for(auto i=a.rbegin();i!=a.rend();++i) {
    cout << *i << "\n";
    }
    
    cout << endl;
     
    for(auto i=a.crbegin();i!=a.crend();++i) {
    cout << *i << "\n";
    }
    
    return 0;
}