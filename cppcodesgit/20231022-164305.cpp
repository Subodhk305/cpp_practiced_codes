#include<iostream>
using namespace std;
#include<fstream>
int main()
{   ofstream sub("first.txt") ;
    string s;
    cout << "enter content of file:" << endl;
    getline(cin,s) ;
    if(sub.is_open()) {
      sub<<s;
      cout << "written successfully" << endl;
    }
    else{
    cout << "cannot write in file"<<endl;
    }
    sub.close() ;
    
    ifstream odh("first.txt") ;
    string p;
    if(odh.is_open()) {
     while(getline(odh, p)) {
      cout <<p<< endl;
     }
     odh.close() ;
    }
    else{
    cout << "cannot read the content of file:" << endl;
    }
    return 0;
}