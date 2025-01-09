#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a(3);
    for(int i=0;i<3;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    char A,B,C;
    cin>>A>>B>>C;
    cout<<a[A-'A']<<' '<<a[B-'A']<<' '<<a[C-'A']<<' '<<endl;
    return 0;

}