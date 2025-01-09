#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,flag=1;
    cin>>n;
    if(n<0) {
        flag=0;
        n=-n;
    }       
    int r=0;
    while(n>0) {
        r=r*10+n%10;
        n=n/10;
    }
    if(flag==0)
        cout<<-r<<endl;
    else
        cout<<r<<endl;
        return 0;
}