#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a;
    a.push_back(n);
    while(n!=1) {
        if(n%2==1) {
            n=n*3+1;
        }
        else {
            n/=2;
        }
        a.push_back(n);
    }
    for(int i=a.size()-1;i>=0;i--) {
        cout<<a[i]<<" ";
    }
    return 0;
}