#include<iostream>
#include<map>
using namespace std;

int main()
{   map<string,long long>stateinfo;
    stateinfo["Maharashtra"]=30303030020200;
    stateinfo["telangana"]=303032030020200;
    stateinfo["Rajasthan"]=303030390020200;
    stateinfo["ahmedabad"]=30303038020200;
    cout << "enter state to be found" << endl;
    string s;
    cin>>s;
    auto it=stateinfo.find(s) ;
    if(it!=stateinfo.end()) {
        cout << "found:" << endl;
        cout << "population:"<<it->second<< endl;
    }
    else {
        cout << "absent" << endl;
    }

    return 0;
}