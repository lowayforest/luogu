#include <bits/stdc++.h>
using namespace std;
int a[25][25][25];
int main() {
    int x,y,z,x1,y1,z1,x2,y2,z2,q,count=0;
    cin>>x>>y>>z;
    cin>>q;
    for(int t=0;t<q;t++) {
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        for(int i=x1-1;i<x2;i++) {
        for(int j=y1-1;j<y2;j++) {
            for(int k=z1-1;k<z2;k++) {
                a[i][j][k]=1;
            }
        }
    }
    }
    
    
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            for(int k=0;k<z;k++) {
                if(a[i][j][k]==0) count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;

}