#include <bits/stdc++.h>
using namespace std;
int a[1000];
// int Add(int *a,int *b, int lena, int lenb) {
//     int len=max(lena,lenb);
//     for(int i=i;i<=len;i++) {
//         b[i]=b[i]+a[i];
//         b[i+1]=b[i+1]+b[i]/10;
//         b[i]= b[i]%10;
//     }
// }
int main() {
    int n;
    cin>>n;
    if(n==0) {
        cout<<0;
        return 0;
    }
    int lena=1;
    a[1]=1;
    for(int i=1;i<=n;i++) {
        int t=0;
        for(int j=1;j<=lena;j++) {
            a[j]=a[j]*i+t;
            t=a[j]/10;
            a[j]=a[j]%10;
        }
        while(t!=0) {
            a[++lena]=t%10;
            t=t/10;
        }
    }
    for(int i=lena;i>=1;i--) cout<<a[i];
    return 0;
}