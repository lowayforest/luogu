#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,sum=0,flag=1,count=0;
    cin>>n;
    vector<int> a;
    while(sum<n*n) {
        int i;
        cin>>i;
        a.push_back(i);
        sum+=i;
    }
    // for(int i=0;i<a.size();i++) {
    //     cout<<a[i]<<' ';
    // }
    for(int i=0;i<a.size();i++) {
        while(a[i]!=0) {
            if(flag==1) cout<<0;
            if(flag==-1) cout<<1;
            count++;
            if(count%n==0) cout<<endl;
            a[i]--;
        }
        flag=-flag;
    }
    return 0;

}