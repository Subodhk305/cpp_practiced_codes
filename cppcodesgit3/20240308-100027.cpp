#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph {
public:

    unordered_map<int , list<int> >adj;

    void addedge(int u, int v, bool direction) {

        adj[u].push_back(v) ;
        if(direction==0) {
            adj[v].push_back(u) ;
        }
    }

    void printgraph() {
        for (auto I:adj) {
            cout << I.first<<"->";
            for(auto j:I.second) {
                cout << j <<" ";
            }
            cout << endl;
        }
    }
};
int main()
{   int n, m;
    cout << "enter no. of nodes: " << endl;
    cin>>n;
    cout << "enter no. of edges: " << endl;
    cin>>m;
    graph g;
    for(int I=0;I<m;I++) {
     int u, v;
     cin>>u>>v;
     g.addedge(u, v, 0) ;
    }
    g.printgraph() ;
    return 0;
}