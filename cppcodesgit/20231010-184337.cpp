#include<iostream>
#include<cstring>
using namespace std;
class student {
public:
    string name;
    int roll_no;
    void setdata1(string s, int n) {
        name=s;
        roll_no=n;
    }
    void display1() {
        cout << "name of student:"<<name<< endl;
        cout << "roll no:"<<roll_no<< endl;
    }
};
class study:virtual public student {
public:
    float maths, physics;
    void setdata2(float m, float p) {
        maths=m;
        physics=p;
    }
    void display2() {
        cout << "marks of physics:"<<physics << endl;
        cout<<"maths:"<<maths<<endl;
    }
};
class score:virtual public student {
public:
    float score;
    void setdata3(float g) {
        score=g;
    }
    void display3() {
        cout << "score is:"<<score << endl;
    }
};
class final:public study, public score {
public:
    int total;
    void calc() {
    total=maths+physics+score;
    }
    void display () {
        cout << "total marks is :"<<total << endl;
    }
};
int main()
{   final s1;
    s1.setdata1("subodh",23) ;
    s1.display1() ;
    
    s1.setdata2(99,98) ;
    s1.display2() ;
    
    s1.setdata3(10) ;
    s1.display3() ;
    s1.calc() ;
    s1.display() ;
    return 0;
}