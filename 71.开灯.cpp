#include <bits/stdc++.h>
int light[2000000];
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        double a,t;
        
        cin>>a>>t;
        for(int j=1;j<=t;j++) {
            int b=(int)(a*j);
            if(light[b]==0) light[b]=1;
            else light[b]=0;
        }
    }
    for(int i=0;i<2000000;i++) {
        if(light[i]==1) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}