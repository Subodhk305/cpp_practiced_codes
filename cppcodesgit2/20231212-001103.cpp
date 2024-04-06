#include<iostream>
using namespace std;

struct node {
    int data;
    struct node*next;
    node(int x=0):data(x),next(nullptr) {}
};

class icecream {
public:
    node*butter;
    node*vanilla;

    icecream():butter(nullptr), vanilla(nullptr) {}

    void addnode(node* &head,int d) {
        node *newnode=new node(d) ;
        if(head==nullptr) {
            head=newnode;
        }
        else {
            node *cur=head;
            while(cur->next!=nullptr) {
                cur=cur->next;
            }
            cur->next=newnode;
        }
    }

    void display(node*&head) {
        if(head==nullptr) {
            cout << "empty:" << endl;
        }
        node*temp=head;

        while(temp!=nullptr) {
            cout << "data:"<<temp->data<<"\t";
            
            temp=temp->next;
        }

    }

    void intersection () {
        node*cur1=butter;
        node*cur2=vanilla;

        while(cur1) {
            while(cur2) {
                if(cur1->data==cur2->data) {
                    cout << "data:"<<cur1->data << endl;
                    break;
                }
                cur2=cur2->next;
            }
            cur1=cur1->next;
            cur2=vanilla;
        }

    }

    void onlyina(node*cur1, node*cur2) {


        while(cur1) {
            while(cur2) {
                if(cur1->data==cur2->data) {
                    break;
                }
                cur2=cur2->next;
            }
            if(cur2==nullptr) {
                cout <<"data:"<<cur1->data << endl;
            }
            cur1=cur1->next;
            cur2=vanilla;
        }
    }


    void onlyinb(node*cur1, node*cur2) {


        while(cur2) {
            while(cur1) {
                if(cur1->data==cur2->data) {
                    break;
                }
                cur1=cur1->next;
            }
            if(cur1==nullptr) {
                cout <<"data:"<<cur2->data << endl;
            }
            cur2=cur2->next;
            cur1=butter;
        }
    }

    void unio() {
        onlyina(butter,vanilla) ;
        intersection() ;
        onlyinb(butter, vanilla) ;
    }



};
int main()
{   icecream c;
    c.addnode(c.butter,23) ;
    c.addnode(c.butter,16) ;

    c.addnode(c.butter,13) ;

    c.addnode(c.butter,36) ;


    c.addnode(c.vanilla,23) ;
    c.addnode(c.vanilla,99) ;
    c.addnode(c.vanilla,94) ;

    c.addnode(c.vanilla,96) ;
    
    cout << endl;
    cout << "------------------------" << endl;
    c.display(c.butter) ;
    cout << endl;
    cout << "------------------------" << endl;
    c.display(c.vanilla) ;
    cout << endl;
    cout << "------------------------" << endl;
    c.intersection() ;
    cout << endl;
    cout << "------------------------" << endl;
    c.onlyina(c.butter,c.vanilla) ;
    cout << endl;
    cout << "------------------------" << endl;
    c.onlyinb(c.butter,c.vanilla) ;
    cout << endl;
    cout << "------------------------" << endl;
    c.unio() ;
    cout << endl;
    cout << "------------------------" << endl;
    return 0;
}