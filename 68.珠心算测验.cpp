#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0,flag=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=2;i<n;i++) {
        flag=0;
        for(int j=0;j<i;j++) {
            for(int k=j+1;k<i;k++) {
                if(a[k]+a[j]==a[i]) {
                    count++;
                    flag=1;
                    break;
                }
                
            }
            if(flag) break;
        }
    }
    cout<<count<<endl;
    return 0;
}