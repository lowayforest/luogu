#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    n=n/7;
    n=n/52;
    int x=n-3;
    if(x>100) x=100;
    for(int i=x;i>=0;i--) {
        if((n-i)%3==0) {
            cout<<i<<endl<<(n-i)/3;
            break;
        }
    }
    
    return 0;
}