#include<iostream>
#include<cstring>
using namespace std;

class CWH{
public:
string title;
float rating;
CWH(string s, float r) {
title= s;
rating=r;
}
virtual void display() {}
};

class CWHvideo:public CWH{
public:
float vil;
CWHvideo(string s, float r, float vl):CWH(s, r){
vil=vl;

}
void display() {
cout << "title is:"<<title << endl;
cout << "with rating:"<<rating << endl;
cout << "videolength:"<<vil << endl;
}



};

class CWHtext:public CWH{
public:
int text;
CWHvideo(string s, float r, int t):CWH(s, r){
text=t;

}
void display() {
cout << "title is:"<<title << endl;
cout << "with rating:"<<rating << endl;
cout << "total no. of words:"<<text<< endl;
}
};

int main() {
string title;
float rating, vl;
int word;
title="Subodh";
rating=4.99;
vl=10.1;
word=255;
CWH *tuts[2];
CWH djvideo;
CWH djwor;
tuts[0]=&djvideo;
tuts[1]=&djwor;
tuts[0]->display() ;
tuts[1]->display() ;
return 0;
}