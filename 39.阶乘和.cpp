#include <bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000];

int Add(int *a,int *b,int lena,int &lenb) {
    int len=max(lena,lenb)+1;
    for(int i=1;i<=len;i++) {
        b[i]=a[i]+b[i];
        b[i+1]=b[i+1]+b[i]/10;
        b[i]=b[i]%10;
    }
    while(b[len]==0&&len>1) len--;
    return len;

}


int main() {
    cin>>n;
    int len=1,lenb=0;
    a[1]=1;
    
    for(int k=1;k<=n;k++) {
        len=1;
        memset(a, 0, sizeof(a));
        a[1]=1;
        for(int i=1;i<=k;i++) {
            int t=0;
            for(int j=1;j<=len;j++) {
                a[j]=a[j]*i+t;
                t=a[j]/10;
                a[j]=a[j]%10;
            }
        
            while(t!=0) {
                a[++len]=t%10;
                t=t/10;
            }
    //         for(int i=len;i>0;i--) {
    //         cout<<a[i];
    // }
       
        }
        lenb=Add(a,b,len,lenb);
    }

    
    for(int i=lenb; i>=1; i--) {
        cout << b[i];
    }
    
    return 0;
 
}
