#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,t,s,n;
    cin>>m>>t>>s;
    if(t==0){
        cout<<0<<endl;
        return 0;
    }

    if(t==0){
        cout<<m<<endl;
        return 0;
    }
        
    //cout<<(s*0.1/t-s/t)<<endl;
    if((s*1.0/t-s/t)==0)
        n=s/t;
    else
        n=s/t+1;
    cout<<max(m-n,0)<<endl;
    return 0;
}   