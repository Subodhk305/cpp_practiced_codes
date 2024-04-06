#include<iostream>
using namespace std;
class student {
protected:
int roll_no;
public:
void set_no(int);
int get_no();

};
void student::set_no(int r) {
roll_no=r;
}
int student::get_no() {
return roll_no;
}

class marks:public student{
protected:
float m1, m2;
public:
float physics;
float mechanics;
void setdata(float, float);

};
void marks::setdata(float m1, float m2) {
physics=m1;
mechanics=m2;


}
class percentage:public marks{
protected:
float d;
public:
void display();

};

void percentage::display() {
d=(physics+mechanics)/2;
cout << "percentage and marks of roll no:"<<get_no() <<endl<<"are as follows:"<< endl;
cout << "marks of physics and mechanics are :" <<physics <<","<<mechanics<< endl;
cout << "percentage:" <<d<< endl;
}

int main()
{   percentage s1;
    s1.set_no(23);
    s1.get_no();
    s1.setdata(99, 98);
    s1.display() ;
    return 0;
}