#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=1;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            if(count<10)
                cout<<0<<count;
            else
                cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}