#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a(10);
    int h;
    int count=0;
    
    
    for(int i=0;i<10;i++) {
        cin>>a[i];
    }

    

    cin>>h;

    //cout<<h<<endl;
    // for(int i:a)
    //     cout<<i<<endl;
    for(int b:a) {
        if(h+30>=b)
        count++;
    }
    cout <<count<<endl;
    return 0;
}