#include<iostream>
#include<cstring>
using namespace std;

class data {
public:
    char name[10];
    char dob[10];
    char add[10];
    char blood_gr[10];

    static int stdi;
    static void get_obj() {
        cout << "no. of object created are :" <<stdi<< endl;

    }

    inline void fun() {
        cout << "this is an inline function " << endl;

    }

    data() {
        strcpy(name,"subodh");
        strcpy(dob,"30/05/2005");
        strcpy(add,"pune");
        strcpy(blood_gr,"fc");
        ++stdi;
    }

    data (data *d1) {
        strcpy(name,d1->name);
        strcpy(dob,d1->dob);
        strcpy(add,d1->add);
        strcpy(blood_gr,d1->blood_gr);
        ++stdi;
    }

    ~data() {
        cout << "this is a destructor" << endl;
    }

    void get_data() {
        cout << "enter name:" << endl;
        cin>>name;
        cout << "enter date of birth" << endl;
        cin>>dob;
        cout << "enter address" << endl;
        cin>>add;
        cout << "enter blood group" << endl;
        cin>>blood_gr;
    }

    friend void display(const data& d);
};

void display(const data &d) {
    cout << "name:" <<d.name<< endl;
    cout << "address:"<<d.add<< endl;
    cout << "date of birth:"<<d.dob<< endl;
    cout << "blood group:"<<d.blood_gr<< endl;
}

int data::stdi=0;

int main()
{   data d1, d2,*ptr[5];
    cout << "default values:" << endl;
    display(d1) ;
    cout << "----------------------------" << endl;
    d2.get_data() ;
    cout << "custom values:" << endl;
    display(d2) ;
    cout << "----------------------------" << endl;
    cout << "use of copy constructor" << endl;
    data d3(&d2) ;
    display(d3) ;

    cout << "----------------------------" << endl;
    cout << "how many objects you want to create:" << endl;
    int n;
    cin>>n;
    for(int I=0; I<n; I++) {
        ptr[I]=new data() ;
        ptr[I]->get_data() ;
    }
    cout << "using array of objects:" << endl;
    for(int I=0; I<n; I++) {
        display(*ptr[I]);
    }
    cout << "----------------------------" << endl;
    cout << "deleting objects :" << endl;

    for(int I=0; I<n; I++) {
        delete(ptr[I]) ;
    }
    data::get_obj() ;
    return 0;
}