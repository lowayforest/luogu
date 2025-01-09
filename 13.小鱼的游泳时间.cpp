#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int min=d-b;
    if(min<0) {
        c=c-1;
        min=min+60;
    }
    int hour=c-a;
    cout<<hour<<" "<<min<<endl;
    return 0;
}