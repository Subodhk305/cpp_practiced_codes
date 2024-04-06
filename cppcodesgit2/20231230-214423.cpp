#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{   ofstream da1("dt1.txt") ;
    if(!da1.is_open()) {
      cout << "error" << endl;
    }
    else{
     da1<<"hello bhai kaise ho aap thik ho kya";
    
    }
    da1.close() ;
    int wc=0;
    int lc=0;
    int cc=0;
    char dat[80];
    ifstream data("dt1.txt") ;

    while(data) {
        data.getline(dat, 80) ;
        int n=strlen(dat) ;
        cc+=n;
        lc++;
        bool ig =false;
        for(int I=0; I<n; I++) {
            if(dat[I]==' '||dat[I]=='\t'||dat[I]=='\n') {
                ig=false;
            }
            else if(!ig){
             ig=true;
             wc++;
            }
        }
    }
    data.close() ;
    cout << "total words: "<<wc << endl;
    cout << "total line: "<<lc << endl;
    cout << "total characters: "<<cc << endl;
    return 0;
}