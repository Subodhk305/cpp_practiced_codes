#include<iostream>
#include<string>
using namespace std;

class CWH {
public:
    string title;
    float rating;
    CWH(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHvideo : public CWH {
public:
    float vil;
    CWHvideo(string s, float r, float vl) : CWH(s, r) {
        vil = vl;
    }
    void display() {
        cout << "title is: " << title << endl;
        cout << "with rating: " << rating << endl;
        cout << "videolength: " << vil << endl;
    }
};

class CWHtext : public CWH {
public:
    int text;
    CWHtext(string s, float r, int t) : CWH(s, r) {
        text = t;
    }
    void display() {
        cout << "title is: " << title << endl;
        cout << "with rating: " << rating << endl;
        cout << "total no. of words: " << text << endl;
    }
};

int main() {
    string title;
    float rating, vl;
    int word;
    title = "Subodh";
    rating = 4.99;
    vl = 10.1;
    word = 255;

    CWHvideo djvideo("VideoTitle", 4.5, vl);
    CWHtext djtext("TextTitle", 4.2, word);

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
