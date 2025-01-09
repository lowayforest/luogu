#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0,pos,m=0,f=0;
    cin>>n;
    string s;
    cin>>s;
    pos=s.find("VK");
        //cout<<pos<<endl;
    while(pos!=-1) {
        f++;
        pos=s.find("VK",pos+1);
    }
    for(int i=0;i<n;i++) {
        
        count=0;
        char c=s[i];
        if(c=='K') s[i]='V';
        else s[i]='K';
        //cout<<s<<endl;
        pos=s.find("VK",0);
        //if(s=="VK") pos=0;
        //cout<<pos<<endl;
        while(pos!=-1) {
            count++;
            pos=s.find("VK",pos+1);
        }
        //cout<<count<<endl;
        m=max(m,count);
        s[i]=c;
    }
    cout<<max(m,f)<<endl;
        // pos=s.find("VK");
        // //cout<<pos<<endl;
        // while(pos!=-1) {
        //     count++;
        //     pos=s.find("VK",pos+1);
        // }
        // cout<<count<<endl;
    return 0;
}