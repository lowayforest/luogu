#include <bits/stdc++.h>
using namespace std;
int a[26];
int isPrimeNunber(int a) {
    if(a==2) return 1;
    if(a%2==0||a==1||a==0) return 0;
    for(int i=3;i<=sqrt(a);i=i+2) {
        if(a%i==0) return 0;
    }
    return 1;
}
int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++) {
        a[s[i]-'a']++;
    }
    int i;
    sort(a,a+26,greater<int>());
    for(i=0;i<26;i++) {
        if(a[i]==0)
            break;
    }
    if(isPrimeNunber(a[0]-a[i-1])==1) cout<<"Lucky Word"<<endl<<a[0]-a[i-1]<<endl;
    else cout<<"No Answer"<<endl<<0<<endl;
    return 0;
}