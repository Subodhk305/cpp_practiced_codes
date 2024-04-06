#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{ map<string, long long>stateinfo;
 stateinfo["Maharashtra"]=2383838388388;
 stateinfo["gujrat"]=2383838388380;
 stateinfo["karnataka"]=2383838388389;
 stateinfo.insert(pair<string, long long>("telangana",2383838388377));
 
 
 cout << "enter the state to be found" << endl;
 string s;
 getline(cin, s) ;
 auto it=stateinfo.find(s) ;
 
 if(it!=stateinfo.end()) {
 cout << "state found in the data" << endl;
 cout << "-------------------------" << endl;
 cout << "population of searched state is:"<<it->second<< endl;
 }
 else{
 
 cout << "cannot find state in the data " << endl;
 
 
 }
 return 0;
}