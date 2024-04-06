#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct personalrecords{
 string name;
 string dob;
 string age;
};

void display(const personalrecords&rec) {
 cout << "name:"<<rec.name<<"date of birth:"<<rec.dob<<"age:"<<rec.age<< endl;
}

bool comparerec(const personalrecords&rec1,const personalrecords&rec2) {
 return rec1.name<rec2.name;
}


int main()
{   vector<personalrecords>personalrecord;
    for(int I=0;I<3;I++) {
    personalrecords rec1;
    cout << "record"<<I+1<< endl;
    cout << "name:" << endl;
    cin>>rec1.name;
    cout << "dob:" << endl;
    cin>>rec1.dob;
    cout << "age:" << endl;
    cin>>rec1.age;
    personalrecord.push_back(rec1) ;
    }
    
    sort(personalrecord.begin(),personalrecord.end(),comparerec) ;
    
    for(const auto & re:personalrecord) {
     display(re);
    }
    
    cout << "enter name to be searched" << endl;
    string n;
    cin>>n;
    
    if(binary_search(personalrecord.begin(),personalrecord.end(),personalrecords{n,"",""},comparerec)) {
     cout << "record found" << endl;
     auto val=lower_bound(personalrecord.begin(),personalrecord.end(),personalrecords{n,"",""},comparerec) ;
     display(*val) ;
    }
    else{
    cout << "absent" << endl;
    }
    
    return 0;
}