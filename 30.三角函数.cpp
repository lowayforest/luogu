#include <bits/stdc++.h>
using namespace std;
int PublicNumber(int a,int b) {
    while (a!=b) {
        if(a>b) {
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    return a;
}

int main() {
    vector<int> a(3);
    for(int i=0;i<3;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int c=PublicNumber(a[0],a[2]);
    cout<<a[0]/c<<'/'<<a[2]/c<<endl;
    return 0;
}