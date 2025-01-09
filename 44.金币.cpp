#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,sum=0,i=1;
    cin>>k;
    while(k>0) {
        for(int j=1;j<=i;j++) {
            sum=sum+i;
            k--;
            if(k==0) break;
        }
            i++;
    }
    cout<<sum<<endl;
    return 0;
}