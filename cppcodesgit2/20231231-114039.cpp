/*
#include<iostream>
#include<fstream>
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

    ofstream da2("dt2.txt") ;
    if(!da2.is_open()) {
      cout << "error" << endl;
    }
    else{
     da2<<"hello bhai kaise ho aap thik ho kya";
    
    }
    da2.close() ;
     
    
    ifstream da3("dt1.txt") ;
    ifstream da4("dt2.txt") ;
    ofstream da5("dt3.txt") ;
    char data1[50];
    char data2[50];
    while(da3) {
      da3.getline(data1, 50) ;
    //  cout <<data1;
    }
    da3.close() ;
    
    while(da4) {
      da4.getline(data2, 50) ;
  //    cout <<data2;
    }
    da4.close() ;
    
    
    
    if(!da5.is_open()) {
      cout << "error" << endl;
    }
    else{
     da5<<"file 1 data:"<<endl;
     da5<<data1;
     cout <<  endl;
     
     da5<<"file 2 data:"<<endl;
     da5<<data2;
    
    
    da5.close() ;
     
    }
    
    ifstream da6("dt3.txt") ;
    char data3[50];
    while(da6) {
      da6.getline(data3, 50) ;
      cout <<data3;
    }
    da6.close() ;
    
    return 0;
}
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream da1("dt1.txt");
    if (!da1.is_open()) {
        cout << "error" << endl;
    }
    else {
        da1 << "hello bhai kaise ho aap thik ho kya";
    }
    da1.close();

    ofstream da2("dt2.txt");
    if (!da2.is_open()) {
        cout << "error" << endl;
    }
    else {
        da2 << "hello bhai kaise ho aap thik ho kya";
    }
    da2.close();

    ifstream da3("dt1.txt");
    ifstream da4("dt2.txt");
    ofstream da5("dt3.txt");
    char data1[50];
    char data2[50];

    while (da3.getline(data1, 50)) {
        // process data1
        cout << data1 << endl;
    }
    da3.close();

    while (da4.getline(data2, 50)) {
        // process data2
        cout << data2 << endl;
    }
    da4.close();
    
    if (!da5.is_open()) {
        cout << "error" << endl;
    }
    else {
        da5 << "file 1 data:" << endl;
        da5 << data1;

        da5 << "file 2 data:" << endl;
        da5 << data2;
    }
    da5.close();

    ifstream da6("dt3.txt");
    char data3[50];
    while (da6.getline(data3, 50)) {
        cout << data3 << endl;
    }
    da6.close();

    return 0;
}
    