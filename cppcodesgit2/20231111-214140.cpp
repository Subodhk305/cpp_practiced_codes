#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{   map<int, string>m1;
    m1.insert(pair<int,string>(23,"subodh")) ;
    m1.insert(pair<int,string>(36,"sangita")) ;

    cout << "size:"<<m1.size()<< endl;
    map<int, string>::iterator it;
    for(it=m1.begin(); it!=m1.end(); it++) {
        cout <<it->first<<" "<<it->second<<" "<< endl;
    }
    return 0;
}