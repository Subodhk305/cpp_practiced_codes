#include<iostream>
#include<set>
using namespace std;

int main()
{   set<int>s1;
    s1.insert(23) ;
    s1.insert(20) ;
    s1.insert(13) ;
    s1.insert(16) ;
    
    for(auto I:s1) {
    cout << I << endl;
    }
    
    cout << "in descending order" << endl;
    set<int, greater<int>>s;
    s.insert(23) ;
    s.insert(20) ;
    s.insert(13) ;
    s.insert(16) ;
    
    for(auto I:s) {
    cout << I << endl;
    }
    return 0;
}