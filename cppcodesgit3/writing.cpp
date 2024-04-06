#include<iostream>
#include<fstream>
using namespace std;

int main()
{   fstream file;
    file.open("new.txt",ios::out| ios::trunc) ;
    if(!file.is_open()) {
        cout << "cannot ascess file" << endl;
    }
    else {
        
        file<<"subodh bhai....."<<endl;
        file<<"kaise ho aap"<<endl;
     // file.open("new.txt",ios::in) ;
     //  file.seekg(0) ;
        
        }
    }

    return 0;
}