#include<iostream>
#include<fstream>
#include<exception>
using namespace std;

void myunexpected() {
cout << "unexpected " << endl;
  throw 0;;
}
void fun() throw(int,double){
 throw 9.8;
}
int main()
{   
    set_unexpected (myunexpected) ;
    try {
       fun() ;
    }
    catch(int a) {
     cout << "integer data" << endl;
    }
    catch(float b) {
     cout << "float data" << endl;
    }
    catch(...) {
     cout << "other data" << endl;
    }
    return 0;
}