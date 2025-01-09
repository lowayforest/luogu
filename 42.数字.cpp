#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,t,count=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        t=i;
        while (t!=0)
        {
            if(t%10==m)
                count++;
            t=t/10;
        }
        
    }
    cout<<count<<endl;
    return 0;
}