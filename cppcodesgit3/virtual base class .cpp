#include<iostream>
using namespace std;

class student{
protected:
int roll_no;
public:
void setno(int a) {
   roll_no=a;
}
void print_no() {
cout << "roll no. is :"<<roll_no<< endl;
}
};

class marks:virtual public student{
  protected:
  float physics, maths;
  public:
  void setmarks(float p, float m) {
  physics=p;
  maths=m;
  }
  void print_marks() {
  cout << "marks of physics" <<physics<< endl;
  cout << "marks of maths"<<maths << endl;
  }
};
class sports:virtual public student{
protected:
int score;
public:
void set_score(int sc) {
score=sc;
}
void print_score() {
cout << "score is :"<<score << endl;
}
};

class result:public marks, public sports{
protected:
int res;
public:
void calcres() {
res=physics+maths+score;
}
void display () {
print_no() ;
print_marks() ;
print_score() ;
cout << "your total is :" <<res<< endl;

}
};

int main()
{
    result s1;
    s1.setno(23) ;
    s1.setmarks(99.9, 97.2) ;
    s1.set_score(10) ;
    s1.calcres() ;
    s1.display() ;
    return 0;
}