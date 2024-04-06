#include<iostream>
using namespace std;

class animal{
public:
virtual void makesound() {
cout << "make an animal sound:" << endl;
}

};

class cat:public animal{
public:
void makesound() override{
cout << "moew moew! " << endl;
}

};
class dog:public animal{
public:
void makesound()override{
cout << "bhow bhow! " << endl;
}

};


int main()
{   animal *a1;
    animal a2;
    a2.makesound() ;
    dog d1;
    cat c1;
    a1=&d1;
    a1->makesound() ;//runtime polymorphism
    a1=&c1;
    a1->makesound() ;
    return 0;
}