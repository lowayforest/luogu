#include <bits/stdc++.h>
using namespace std;
double sum;
int main() {
    int n;
    cin>>n;
    vector<double> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<n-1;i++) {
        sum+=a[i];
    }
    printf("%.2lf",sum/(n-2.0));
    return 0;
 }