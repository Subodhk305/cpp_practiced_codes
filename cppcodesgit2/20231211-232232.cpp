#include<iostream>
using namespace std;

struct node {
    int prn;
    string name;
    struct node *next;
};

class clubmember {
public:
    node*head;
    clubmember() :head(nullptr) {}

    node* create_node(int p,const string&n) {
        node *newnode=new node;
        newnode->prn=p;
        newnode->name=n;
        newnode->next=nullptr;
        return newnode;
    }

    void insert_atend(int p,const string&n) {
        node *newnode=create_node( p,n) ;


        if(head==nullptr) {
            head=newnode;
        }
        else {
            node *temp=head;
            while(temp->next!=nullptr) {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }

    void del(int pos) {
        if(pos<1||head==nullptr) {
            cout << "club is empty or position is invalid" << endl;
        }
        else if(pos==1) {
            node*temp=head;
            head=head->next;
            delete temp;
        }
        else {
            node*temp=head;
            for(int I=0; I<pos-1 &&temp!=nullptr; I++) {
                temp=temp->next;
            }
            if(temp==nullptr || temp->next==nullptr) {
                cout << "invalid position" << endl;
                return;
            }
            node*nodetodel=temp->next;
            temp->next=temp->next->next;
            delete nodetodel;
        }
    }

    void display() {
        node*temp=head;
        if(head==nullptr) {
            cout << "empty" << endl;
        }
        else {
            while(temp!=nullptr) {
                cout <<"prn number: "<< temp->prn<<"\nname: "<<temp->name<< endl;
                temp=temp->next;
            }
        }

    }

    void count() {
        int c=0;
        node*temp=head;
        if(head==nullptr) {
            cout << "empty" << endl;
        }
        else {
            while(temp!=nullptr) {
                ++c;
                temp=temp->next;
            }
            cout << "count is:" <<c<< endl;
        }
    }

    void revndis(node*node) {
        if(node==nullptr) {
            return;
        }
        revndis(node->next) ;

        if(node->next==nullptr) {
            cout << "secretary" << endl;
        }
        else if(node==head) {
            cout << "president" << endl;
        }
        else {
            cout << "member" << endl;
        }

        cout <<"prn number:"<< node->prn<<"name:"<<node->name<< endl;

    }

    void concatenate (clubmember&lista, clubmember&listb) {
        node*temp1=lista.head;
        node*temp2=listb.head;

        while(temp1!=nullptr) {
            insert_atend(temp1->prn,temp1->name);
            temp1=temp1->next;
        }

        while(temp2!=nullptr) {
            insert_atend(temp2->prn,temp2->name);
            temp2=temp2->next;
        }
    }
};
int main()
{   clubmember club, listx, listy;
    listx.insert_atend(23,"subodh") ;
    listx.insert_atend(36,"paras") ;

    listy.insert_atend(16,"harsh") ;
    listy.insert_atend(13,"ayush") ;

    club.concatenate(listx, listy);

    club.count();
    cout << "-----------------" << endl;
    club.display() ;
    cout << "-----------------" << endl;
    club.del(2) ;

    cout << "-----------------" << endl;
    club.display() ;
    
    cout << "-----------------" << endl;
    club.revndis(club.head) ;
    
    return 0;
}