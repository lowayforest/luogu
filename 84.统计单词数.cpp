#include <bits/stdc++.h>
using namespace std;
int main() {
    string l,s;
    int pos,count=0,t=0,ans;
    getline(cin,s);
    getline(cin,l);
    s=' '+s+' ';
    l=' '+l+' ';
    for(int i=0;i<l.size();i++) {
        l[i]=tolower(l[i]);
    }
    for(int i=0;i<s.size();i++) {
        s[i]=tolower(s[i]);
    }
    // for(int i=0;i<s.size();i++) {
    //     cout<<s[i];
    // }
    // while(t!=-1) {
    //     if(t==0) {
    //         t=l.find(s,t);
    //         pos=t;
    //         count++;
    //     }
    //     else {
    //         t=l.find(s,t+1);
    //         count++;
    //     }
    // }
    // cout<<count<<endl<<pos<<endl;
    pos=l.find(s);
    ans=pos;
    //cout<<pos<<endl;
    while (pos!=-1)
    {
        count++;
        pos=l.find(s,pos+1);
    }
    if(ans==-1) {
        cout<<ans<<endl;
    }
    else {
        cout<<count<<' '<<ans<<endl;
    }
    return 0;
}
