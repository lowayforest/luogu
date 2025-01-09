#include <bits/stdc++.h>
using namespace std;
string s1;
string s2;
int a[10000],b[10000],c[10000];
int main() {
    cin>>s1;
    cin>>s2;
    int la,lb,lc;
    la=s1.size();
    //cout<<la<<endl;
    lb=s2.size();
    //cout<<lb<<endl;
    for(int i=0;i<la;i++) {
        a[la-i]=s1[i]-'0';
    }
    for(int i=0;i<lb;i++) {
        b[lb-i]=s2[i]-'0';
    }
    
    
    lc=la+lb;
    for(int i=1;i<=la;i++) {
        for(int j=1;j<=lb;j++) {
            c[i+j-1]=c[i+j-1]+a[i]*b[j];
            c[i+j]=c[i+j]+c[i+j-1]/10;
            c[i+j-1]=c[i+j-1]%10;
        }
    }
    while(c[lc]==0&&lc>1) lc--;
    for(int i=lc;i>0;i--) 
        cout<<c[i];
    return 0;
}