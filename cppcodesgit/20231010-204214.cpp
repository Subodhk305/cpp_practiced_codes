#include<iostream>
using namespace std;
class animal{
public:
virtual void makesound() {
cout << "sound of animal:" << endl;

}
};
class dog:public animal{
public:
void makesound() override{
cout << "bhow bhow" << endl;
}
};

class cat: public animal{
public:
void makesound() override{
cout << "meow meow" << endl;
}
};
int main()
{   animal a1;
    a1.makesound() ;
    animal *a2;
    dog d;
    cat c;
    a2=&d;
    a2->makesound() ;
    a2=&c;
    a2->makesound() ;
    return 0;
}