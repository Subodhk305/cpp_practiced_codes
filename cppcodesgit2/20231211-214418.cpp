#include<iostream>
#include<stack>
#include<cstring>
#define MAX 50
using namespace std;

class tack {
public:
    char data[MAX];
    int top=-1;

    void push(char c) {
        if(top==MAX-1) {
            cout << "stack is full" << endl;
        }
        else {
            data[++top]=c;
            data[top+1]='\0';
        }
    }

    void reverse() {
        if(top==-1) {
            cout << "empty stack" << endl;
        }
        else {
            cout << "reverse array is:" << endl;
            for(int I=top; I>=0; I--) {
                cout << data[I]<< endl;
            }
        }
    }

    void convert( char str[]) {
        for(int I=0; I!='\0'; I++) {
            if((str[I]>='a'&&str[I]<='z') ||  (str[I]>='A'&&str[I]<='Z')) {
                str[I]=static_cast <char>(tolower(str[I])) ;
            }
        }
    }

    void check(char a[]) {
        char rev[MAX];
        for(int I=top,j=0; I>=0; I--,j++) {
            rev[j]=a[I];
        }
        rev[top+1]='\0';

        if(strcmp(rev, a)==0) {
            cout << "data is palindromic sequence" << endl;
        }
        else {
            cout << "data is not a palindromic sequence" << endl;
        }
    }
};
int main()
{   tack S;
    
    cout << "enter data" << endl;
    char sc[MAX];
    cin.getline(sc, MAX) ;
    S.convert(sc) ;
    for(int I=0;sc[I]!='\0';I++) {
    S.push(sc[I]) ;
    }
    S.reverse() ;
 //   S.convert(sc) ;
    S.check(sc) ;
    return 0;
}