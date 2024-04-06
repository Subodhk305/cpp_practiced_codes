#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{   fstream writeinp("new.txt",ios::out | ios::trunc) ;
    if(!writeinp.is_open()) {
      cout << "can't access the files" << endl;
    }
    else{
    writeinp<<"topper bhai kaise ho aap\n";
    writeinp<<"aur kya chal raha hai\n";
    writeinp.close() ;
    cout << "written successfully" << endl;
    }
    
    fstream writeout("new.txt",ios::in) ;
    if(!writeout.is_open()) {
      cout << "can't access the files" << endl;
    }
    else{
      string s1;
      cout << endl;
      while(!writeout.eof()) {
        getline(writeout,s1) ;
        cout << s1 << endl;
      }
      writeout.close() ;
      cout << "read successfuly" << endl;
    }
    
    
    return 0;
}