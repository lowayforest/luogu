#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,count=0;
    cin>>a;
    while(a!=1) {
        a=a/2;
        count++;
    }
    cout<<count+1<<endl;
    return 0;
}