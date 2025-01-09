#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int> a;
    int b;
    while(cin>>b) {
        a.insert(b);
    }
    // for(int i:a) {
    //     cout<<i<<endl;
    // }
    int n=a.size();
    long long sum=0;
    long long tem=1LL<<(n-1);
    for(int i:a) {
        sum=sum+i*tem;
    }
    cout<<sum<<endl;
    return 0;
}
