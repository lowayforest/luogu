#include <bits/stdc++.h>
using namespace std;
int isPrimeNum(int a) {
    if(a==0||a==1) return -1;
    if(a==2) return 1;
    if(a % 2 == 0) return -1;
    for(int i=3;i<=sqrt(a);i=i+2) {
        if(a%i==0) return -1;
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++) {
        int b;
        cin>>b;
        if(isPrimeNum(b)==1) a.push_back(b);
    }
    for(int i:a) cout<<i<<' ';
    return 0;
}