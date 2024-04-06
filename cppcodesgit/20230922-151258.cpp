#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v) {
    for(int j=0; j<v.size(); j++) {
        cout <<v[j]<<" ";
    }
    cout << endl;
}
int main() {
    vector<int>vec1;
    int c;
    cout << "enter no. of elements to be added in vector:" << endl;
    cin>>c;
    for(int I=0; I<c; I++) {
        int ele;
        cout << "enter elements of vector:" << endl;
        cin>>ele;
        vec1.push_back(ele);
    }

    display(vec1) ;
    vector<int>::iterator iter=vec1.begin() ;
    vec1.insert(iter+1,20,999) ;
    display(vec1) ;
    return 0;

}