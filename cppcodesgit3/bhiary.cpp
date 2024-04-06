#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {

    char input[100];
    strcpy(input,"welcome subodh bhai") ;
    int length=strlen(input) ;
    fstream file;
    file.open("new.bin",ios::binary|ios::in|ios::out|ios::trunc);
    if(!file.is_open()) {
        cout << "cannot ascess file" << endl;
    }
    else {

        for(int counter=0; counter<length; counter++) {
            file.put(input[counter]) ;
        }

        file.seekg(0) ;

        char ch;
        while(file.eof()) {
            // string ch;
            file.get(ch) ;
            cout << ch<< endl;
        }
    }

    return 0;
}
