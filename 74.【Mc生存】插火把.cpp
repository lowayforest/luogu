#include <bits/stdc++.h>
using namespace std;
int a[110][110];
int main() {
    int n,m,k,count=0;;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++) {
        int x,y;
        cin>>x>>y;
        for(int j=x-1;j<=x+1;j++) {
            for(int k=y-1;k<=y+1;k++) {
                a[j][k]=1;
            }
        }
        a[x][abs(y-2)]=1;
        a[x][y+2]=1;
        a[abs(x-2)][y]=1;
        a[x+2][y]=1; 
    }
    for(int i=0;i<k;i++) {
        int x,y;
        cin>>x>>y;
        for(int j=abs(x-2);j<=x+2;j++) {
            for(int t=abs(y-2);t<=y+2;t++) {
                a[j][t]=1;
            }
        }
        
    }
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if(a[i][j]==0) count++;
        }
    }
    cout<<count;
    return 0;
}