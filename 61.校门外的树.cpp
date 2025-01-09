#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,m,count=0;
    cin>>l>>m;
    vector<int> a(l+1,1);
    for(int i=0;i<m;i++) {
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++) {
            if(a[j]==1) a[j]=0;
        }
    }
    for(int i:a) {
        if(i==1) count++;
    }
    cout<<count<<endl;
    return 0;
}