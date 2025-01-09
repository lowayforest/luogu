#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        count=0;
        for(int j=0;j<i;j++) {
            if(a[i]>a[j]) count++;
        }
        cout<<count<<' ';
    }
    return 0;
}