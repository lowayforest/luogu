#include <bits/stdc++.h>
using namespace std;
int main() {
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<int> a(s1+s2+s3+1,0);
    for(int i=1;i<=s1;i++) {
        for(int j=1;j<=s2;j++) {
            for(int k=1;k<=s3;k++) {
                a[i+j+k]++;
            }
        }
    }
    int max=0,index=0;
    for(int i=1;i<=s1+s2+s3;i++) {
        if(a[i]>max) {
            max=a[i];
            index=i;
        }
    }
    cout<<index<<endl;
    return 0;
}