#include<iostream>
using namespace std;
#define I INT_MAX

int cost[8][8]= {
    {I, I, I, I, I, I, I, I},
    {I, I, 25,I,I,I,5,I},
    {I,25,I, 12,I,I,I,10},
    {I, I, 12,I,8,I,I,I},
    {I, I, I, 8,I,16,I,14},
    {I, I, I,I, 16,I,20,18},
    {I, 5,I,I,I,20,I,I},
    {I, I, 10,I,14,18,I,I},
};
int near[8]= {I, I, I, I, I, I,I, I};
int t[2][6];

int main()
{   int u,v,n=7, min=I;
    for (int I=0; I <=n; I++) {
        for(int j=I; j<=n; j++) {
            if(cost[I][j]<min) {
                min=cost[I][j];
                u=I;
                v=j;
            }
        }
    }

    for(int I=0; I<n; I++) {
        if(near[I]!=0) {
            if(cost[I][u]<cost[I][v]) {
                near[I]=u;
            }
            else {
                near[I]=v;
            }
        }
    }
    
    for(int I=1;I<n-1;I++) {
    min=I;
    int k;
    for(int j=I;j<=n;j++) {
     if(near[j]&& cost[j][near[j]]<min) {
      min=cost[j][near[j]];
      k=j;
     }
    }
    t[0][I]=k;t[1][I]=near[k];
    near[k]=0;
    
    for(int j=1;j<=n;j++) {
     if(near[j]!=0&& cost[j][k]<cost[j][near[j]]) {
     near[j]=k;
     }
    }
    }
    
    for(int I=0;I<n-1;I++) {
    
    cout <<"("<<t[0][I]<<","<<t[1][I]<<")"<< endl;
    
    }
    
    
    return 0;
}