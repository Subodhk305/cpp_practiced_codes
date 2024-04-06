#include<iostream>
#include<fstream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[9];
    char c;

    ofstream data1;
    data1.open("first.txt");
    data1.write((char*)(&a), sizeof(a));
    data1.close();

    ofstream data2, data3;
    data2.open("even.txt");
    data3.open("odd.txt");

    ifstream data;
    data.open("first.txt");
    data.read((char*)(&b), sizeof(b));
    data.close();

    for (int i = 0; i < 9; i++) {
        if (b[i] % 2 != 0) {
            data2 << b[i] << " ";
        } else {
            data3 << b[i] << " ";
        }
    }

    data2.close();
    data3.close();

    ifstream re;

    re.open("even.txt");
    char d;
    while (re.get(d)) {
        cout << d;
    }
    re.close();

    cout << endl;

    re.open("odd.txt");
    char p;
    while (re.get(p)) {
        cout << p;
    }
    re.close();

    return 0;
}
