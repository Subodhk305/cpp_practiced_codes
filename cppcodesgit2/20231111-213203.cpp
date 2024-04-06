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
    
    for(vector<int>::iterator it=a.begin();it!=a.end();++it) {
    cout << *it << "\n";
    }
    
    cout << endl;
    
    for(vector<int>::const_iterator i=a.cbegin();i!=a.cend();++i) {
    cout << *i << "\n";
    }
    
  //  for(vector<int>::const_const_iterator i=a.rbegin();i!=a.rend();++i) {
//    cout << *i << "\n"    }
    
    return 0;
}