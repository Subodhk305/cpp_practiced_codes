#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    cout << "total no. of arguments (default is 1 i.e file name) :"<<argc<< endl;
    for(int I=0; I<argc; I++) {
        cout << "value "<<I<<" :"<<argv[I]<< endl;
    }
    return 0;
}