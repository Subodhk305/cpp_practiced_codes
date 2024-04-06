#include<iostream>
#include<cstring>
#include<map>
using namespace std;

int main()
{   map<string,int>marksmap;
    map<string,int>::iterator iter;
    marksmap["subodh"]=23;
    marksmap["yash"]=21;
    for(iter=marksmap.begin(); iter!=marksmap.end(); iter++) {
        cout <<"key: "<<iter->first<<" value: "<<iter->second<<endl;
    }
    return 0;
}