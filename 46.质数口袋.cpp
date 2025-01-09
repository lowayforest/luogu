#include <bits/stdc++.h>
using namespace std;
bool PrimeNumber (int a) {
    int count=0;
    for(int i=1;i<=a;i++) {
        if(a%i==0)
            count++;
    }
    if(count>2)
        return false;
    else
        return true;
}
int main() {
    int n,sum=0,count=0,i=2;
    cin>>n;
    if(n==1) {
        cout<<0<<endl;
        return 0;
    }
    while(sum+i<=n) {
        if(PrimeNumber(i)==true) {
            cout<<i<<endl;
            count++;
            sum=sum+i;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}