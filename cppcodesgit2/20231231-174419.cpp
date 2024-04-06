#include<iostream>
#include<fstream>
#include<strstream>
#include<iomanip>
using namespace std;
#define maxi 50
int main()
{   char data[maxi];
    ostrstream myobj(data, maxi) ;
    int rollno;
    string name;
    cout << "enter name and rollno" << endl;
    cin>>name>>rollno;
    myobj<<name<<setw(10)<<rollno<<setw(20)<<'\0';
    cout << data << endl;
    return 0;
}