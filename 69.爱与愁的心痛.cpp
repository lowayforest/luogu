#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    //sort(a.begin(),a.end());
    //for(int i:a) cout<<i<<' ';
    long min=100*n;
    int left=0,right=m-1;
    while (right<n)
    {
        int t=0;
        for(int i=left;i<=right;i++) {
            t+=a[i];
        }
        if(t<min) min=t;
        left++;
        right++;
    }
    cout<<min<<endl;
    return 0;
}