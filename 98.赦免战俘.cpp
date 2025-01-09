#include <bits/stdc++.h>
using namespace std;
int c[1100][1100];
int free1(int a, int b, int w) {
    if(w<=1) return 0;
    for(int i=a;i<a+w/2;i++) {
        for(int j=b;j<b+w/2;j++) {
            c[i][j]=1;
        }
    }
    
    free1(a+w/2,b,w/2);
    free1(a,b+w/2,w/2);
    free1(a+w/2,b+w/2,w/2);

    return 0;

}

int main() {
    int n;
    cin>>n;
    int edge=pow(2,n*1.0);
    free1(1,1,edge);
    for(int i=1;i<=edge;i++) {
        for(int j=1;j<=edge;j++) {
            if(c[i][j]==1) cout<<0<<' ';
            else cout<<1<<' ';
        }
        cout<<endl;
    }
    return 0;
}

