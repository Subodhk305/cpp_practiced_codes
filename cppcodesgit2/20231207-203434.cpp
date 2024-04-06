#include<iostream>
using namespace std;
class publication {
public:
    string name;
    double price;
    publication():name(""),price(0.0) {}
    virtual void getdata() {

        cout << "enter name:" << endl;
        cin>>name;
        cout << "enter price:" << endl;
        cin>>price;
    }
    virtual void display() {
        cout << "name:"<<name << endl;
        cout << "price:"<<price << endl;
    }

};

class book:public publication {
public:
    int pagecount;
    book():pagecount(0) {}
    void getdata() override {
        publication::getdata() ;
        cout << "enter pagecount:" << endl;
        cin>>pagecount;
    }
    void display() override {

        publication::display() ;
        cout << "pagecount:"<<pagecount << endl;
    }

};


class tape:public publication {
public:
    int playingtime;
    tape():playingtime(0) {}
    void getdata() override {
        publication::getdata() ;
        cout << "enter playingtime:" << endl;
        cin>>playingtime;
    }
    void display() override {

        publication::display() ;
        cout << "playingtime:"<<playingtime << endl;
    }

};
int main()
{   try {
        book b1;
        tape t2;
        b1.getdata() ;
        b1.display() ;
        t2.getdata() ;
        t2.display() ;
    }
    catch(...) {
        cerr<<"error"<<endl;
    }
    return 0;
}