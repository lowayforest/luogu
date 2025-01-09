#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a;
    vector<int> b;
    for(int i=1;i<=n;i++) {
        if(i%k==0) {
            a.push_back(i);
        }
        else
            b.push_back(i);
    }
    int suma=0,sumb=0;
    for(int i=0;i<a.size();i++)
        suma+=a[i];
    for(int i=0;i<b.size();i++)
        sumb+=b[i];
    printf("%.1lf %.1lf",suma*1.0/a.size(),sumb*1.0/b.size());
    return 0;
}
