#include <iostream>
#include <cstring>

using namespace std;

class employee {
public:
    int eno;
    char ename[20];
    float salary;

    void  search(employee e[], int n, int eno);
    void  search(employee e[], int n, char ename[]);
    int  search(employee e[], int n, float salary);
};

void employee:: search(employee e[], int n, int eno) {
    for (int i = 0; i <= n; i++) {
        if (e[i].eno == eno) {
            cout << "employee found having id:" <<e[i].ename<< endl;

        }
    }

}

void employee:: search(employee e[], int n, char ename[]) {
    for (int i = 0; i <= n; i++) {
        if (strcmp(e[i].ename, ename) == 0) {
            cout << "employee found having id:"<<e[i].eno<<" name:"<<e[i].ename<< endl;

        }
    }


}

int employee:: search(employee e[], int n, float salary) {
    int count = 0;
    for (int i = 0; i <= n; i++) {
        if (e[i].salary > salary) {
            cout << "Employee " << i + 1 << ": " << e[i].ename << " has a salary greater than " << salary << endl;
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    employee e[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        cout << "Employee Number: ";
        cin >> e[i].eno;
        cout << "Employee Name: ";
        cin >> e[i].ename;
        cout << "Salary: ";
        cin >> e[i].salary;
    }
    int a;
    do {
        int op;

        employee e1;
        cout <<endl;
        cout << "OPERATIONS:" << endl;
        cout << "1.searching by name of employee" << endl;
        cout << "2.searching by id of employee" << endl;
        cout << "3.searching by salary" << endl;
        cout << endl;
        cout << "enter operation to be performed" << endl;
        cin>>op;
        switch(op) {
        case 3:
            float salary;

            cout << "Enter the salary for comparison: ";
            cin >> salary;
            e1.search(e, n, salary);
            break;
        case 2:
            int id;
            cout << "enter id of employee:" << endl;
            cin>>id;
            e1.search(e,n, id) ;
            break;
        case 1:

            char nm[100];
            cout << "enter name:" << endl;
            cin>>nm;
            e1.search(e, n, nm) ;
            break;
        default:
            cout << "invalid input!" << endl;
        }
        cout <<endl;
        cout << "do you want to continue to main operation:\n1-yes 0-no" << endl;

        cin>>a;
    }
    while(a==1) ;
    return 0;
}
    