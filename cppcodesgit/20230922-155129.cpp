#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{   map<string, int>marksmap;
    marksmap["subodh"]=99;
    marksmap["harsh"]=98;
    marksmap["su"]=99;
    marksmap["sub"]=99;
    
    map<string,int>::iterator iter;
    iter=marksmap.begin() ;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++) {
    cout <<(*iter).first<<" "<<(*iter).second<< endl;
    }
    return 0;
}