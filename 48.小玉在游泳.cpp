#include <bits/stdc++.h>
using namespace std;
int main() {
    double s,sum=0,t=2.0;
    int count=0;
    cin>>s;
    while(sum<s){
        sum=sum+t;
        count++;
        t=t*0.98;
    }
    cout<<count<<endl;
    return 0;
}