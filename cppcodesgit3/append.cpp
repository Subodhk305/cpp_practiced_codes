#include<iostream>
#include<fstream>
using namespace std;

int main()
{   fstream file;
    file.open("new.txt",ios::in| ios::app) ;
    if(!file.is_open()) {
        cout << "cannot ascess file" << endl;
    }
    else {
        
      //  file<<"subodh bhai....."<<endl;
     //   file<<"kaise ho aap"<<endl;
     // file.open("new.txt",ios::in) ;
      file.seekg(0) ;
       while(file.good()) {
            string out;
            getline(file, out) ;
            cout << out << endl;
        }
    }

    return 0;
}