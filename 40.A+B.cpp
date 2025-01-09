#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int a[1000],b[1000],c[1000];
int main() {
    int la,lb,lc;
    cin>>s1;
    cin>>s2;

    la=s1.size();
    lb=s2.size();

    for(int i=0;i<la;i++) {
        a[la-i]=s1[i]-'0';
    }
    for(int i=0;i<lb;i++) {
        b[lb-i]=s2[i]-'0';
    }

    lc=max(la,lb)+1;

    for(int i=1;i<=lc;i++) {
        c[i]=c[i]+a[i]+b[i];
        c[i+1]=c[i+1]+c[i]/10;
        c[i]=c[i]%10;
    }
    while(c[lc]==0&&lc>1) lc--;
    for(int i=lc;i>0;i--) {
        cout<<c[i];
    }
    return 0;
}