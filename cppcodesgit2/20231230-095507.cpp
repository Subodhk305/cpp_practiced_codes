#include<iostream>
using namespace std;

class data {
public:
    int roll;
    string name;
    void data_stu() {
        cout << "enter name" << endl;
        cin>>name;
        cout << "enter roll no." << endl;
        cin>>roll;
    }
};

class marks:virtual public data {
public:
    float phy;
    float chem;

    void getdata() {
        cout << "enter marks of physics:" << endl;
        cin>>phy;
        cout << "enter marks of chemistry" << endl;
        cin>>chem;
    }


};

class sports:virtual public data {
public:
    int s;
    void gett() {
        cout << "enter total sports credits " << endl;
        cin>>s;
    }

};

class most:public marks, public sports {
public:
    void gettotal(){
        cout << "\n\n" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "total marks" << endl;
        cout << "for student details as below:" << endl;
        cout << "name"<<name<< endl;
        cout << "roll no."<<roll << endl;
        float total=((phy+chem+s) /300 )*100;
        cout << total << endl;
    }
};
int main()
{   most m;
    m.data_stu() ;
    m.getdata() ;
    m.gett() ;
    m.gettotal() ;

    return 0;
}