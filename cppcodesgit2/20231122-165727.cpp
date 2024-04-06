#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


struct per_records {

    string name;
    string dob;
    string address;


};

void display(const per_records&other) {
    cout << "name is:" <<other.name<<"\ndate of birth:"<<other.dob<<"\naddress:"<<other.address<< endl;

}

bool compare(const per_records&other1,const per_records&other2) {
    return other1.name<other2.name;
}


int main()
{   vector<per_records>personalrecord;
    cout << "enter data" << endl;
    per_records rec;
    for(int I=0; I<3; I++) {
        cout << "enter name:" << endl;
        getline(cin,rec.name) ;
        cout << "enter dob:" << endl;
        getline(cin,rec.dob) ;
        cout << "enter address:" << endl;
        getline(cin,rec.address) ;
        personalrecord.push_back(rec) ;
    }

    sort (personalrecord.begin(),personalrecord.end(),compare);

    cout << "sorted array" << endl;
    for(const auto re:personalrecord) {
        display(re) ;
        cout << "---------------------------" << endl;
    }
    string s1;
    cout << "enter the data to be searched" << endl;
    getline(cin,s1) ;

    if(binary_search(personalrecord.begin(),personalrecord.end(),per_records{s1, "",""},compare)) {
        cout << "found! " << endl;
        auto it=lower_bound(personalrecord.begin(),personalrecord.end(),per_records{s1, "",""},compare);
        display(*it) ;
    }
    else {
        cout << "absent" << endl;
    }
    return 0;
}