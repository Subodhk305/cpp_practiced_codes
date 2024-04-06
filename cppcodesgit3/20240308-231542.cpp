#include<iostream>
#include<cstring>
using namespace std;
bool compare_string() {
   bool flag=false;
   string a;
   cout << "enter value of string: " << endl;
   cin>>a;
   for(int I=0; I<a.length();I++) {
    for(int j=I+1;j<a.length();j++) {
     if(a[I]==a[j]) {
      flag=true;
      cout << "repeating character of string: "<<a[I]<< endl;
     }
    }
   }
   
   if(flag==false) {
    cout << "no character is repeated in the string given" << endl;
   }
}
int main()
{   compare_string() ;
    return 0;
}