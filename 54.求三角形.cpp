#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            count ++;
            if(count/10==0)
                cout<<0<<count;
            else {
                cout<<count;
            }
        }
        cout<<endl;
    }
    count=0;
    cout<<endl;
    for(int i=0;i<n;i++) {
        for(int k=0;k<n-i-1;k++) {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++) {
            count ++;
            if(count/10==0)
                cout<<0<<count;
            else {
                cout<<count;
            }
        }
        cout<<endl;
    }
    return 0;
}