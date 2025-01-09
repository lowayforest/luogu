#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m=1,mask=1;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    // for(int i=0;i<n;i++) {
    //     cout<<a[i]<<' ';
    // }
    for(int i=1;i<n;i++) {
        if(a[i-1]+1==a[i]) {
            mask++;
            //cout<<a[i]<<endl;
        }
        if(a[i-1]+1!=a[i]||i==n-1) {
            m=max(m,mask);
            //cout<<mask<<endl;
            mask=1;
        }
        
    }
    cout<<m<<endl;
    return 0;
}