#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class data{
public:
char name[50];
int rollno;
long int number;
};
int main()
{   data d1;
    strcpy(d1.name,"subodh");
    d1.rollno=23;
    d1.number=8329308863;
    
    fstream out("object.txt",ios::out|ios::trunc) ;
    out.write((char *)&d1, sizeof(d1)) ;
    out.close() ;
    
    
    data d2;
    fstream reading("object.txt",ios::in) ;
    reading.read((char *)&d2, sizeof(d2)) ;
    reading.close() ;
    
    
    cout << "name: "<<d2.name<< endl;
    cout << "roll number: "<<d2.rollno<< endl;
    cout << "phone number: "<<d2.number<< endl;
    return 0;
}