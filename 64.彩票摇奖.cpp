#include <bits/stdc++.h>
using namespace std;
int b[7];
int main() {
    int n,count=0;
    cin>>n;
    int a[7];
    for(int i=0;i<7;i++) 
        cin>>a[i];
    for(int i=0;i<n;i++) {
        count=0;
        for(int j=0;j<7;j++) {
            int c;
            
            cin>>c;
            for(int j=0;j<7;j++) {
                if(c==a[j]) count ++;
            }
            
        }
        b[7-count]++;
    }
    for(int i=0;i<7;i++) {
        cout<<b[i]<<" ";
    }
    return 0;
}