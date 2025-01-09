#include <bits/stdc++.h>
using namespace std;
int main() { 
    vector<int> a;
    
    for(int i= 0;;i++) {
        int num;
        cin>>num;
        a.push_back(num);
        if(a[i]==0) break;
    }
    // for(int i=0;i<a.size();i++) {
    //     cout<<a[i]<<endl;
    // }
    for(int i=a.size()-2;i>=0;i--) {
        cout<<a[i]<<' ';
    }
    return 0;
}