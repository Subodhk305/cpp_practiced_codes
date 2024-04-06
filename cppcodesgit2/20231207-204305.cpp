#include<iostream>
#include<fstream>
using namespace std;

int main()
{   fstream write("n.txt",ios::out|ios::trunc) ;
    if(!write.is_open()) {
        cout << "cannot open file" << endl;
    }
    else {
        write<<"kaise ho aap"<<endl;
        write<<"thik honge"<<endl;
        write.close() ;
        cout << "written successfully" << endl;
        cout <<  endl;
    }

    fstream reading("n.txt",ios::in) ;
    if(!reading.is_open()) {
        cout << "cannot open file" << endl;
    }
    else {
        string s;
        while(!reading.eof()) {
            getline(reading,s) ;
            cout << s << endl;
        }
        reading.close() ;
        cout << "read successfully" << endl;
    }
    return 0;
}