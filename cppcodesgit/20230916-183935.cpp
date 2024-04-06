#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main() {
ofstream out("file.txt") ;
string s1;
s1="hellosubodh";
out<<s1;
cout <<s1<< endl;
out.close();

ifstream in("file.txt") ;
string s2;
in>>s2;
cout << s2 << endl;
in.close() ;

ifstream ing;
ing.open("file.txt") ;
string s3;
ing>>s3;
cout <<s3<< endl;
ing.close() ;

while (in.eof()==0) {
getline(in, s2) ;
cout <<s2 << endl;
}
}
