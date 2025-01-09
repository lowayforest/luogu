#include <bits/stdc++.h>
using namespace std;
int a[50][50];
int main() {
    int n,x,y;
    cin>>n;
    x=1;
    y=(n>>1)+1;
    a[x][y]=1;
    for(int i=2;i<=n*n;i++) {
        if(x==1&&y!=n) {
            y=y+1;
            x=n;
            a[x][y]=i;
        }
        else if(y==n&&x!=1) {
            y=1;
            x--;
            a[x][y]=i;
        }
        else if(x==1&&y==n) {
            x=x+1;
            a[x][y]=i;
        }
        else if(x!=1&&y!=n) {
            if(a[x-1][y+1]==0) {
                x=x-1;
                y=y+1;
            }
            else {
                x++;
            }
            a[x][y]=i;
        }
            
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}