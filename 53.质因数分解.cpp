#include <bits/stdc++.h>
using namespace std;
bool isPrimeNumber (int a) {
    if(a==2) return 1;
    for(int i=2;i<=sqrt(a);i=i+2) {
        if(a%i==0) return 0;
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    if(n%2==0&&isPrimeNumber(n/2)){ 
        cout<<max(2,n/2)<<endl;
        return 0;
    }
    for(int i=3;i<=n/3;i=i+2) {
        if(n%i==0&&isPrimeNumber(n/i)) {
        cout<<max(i,n/i)<<endl;
        break;
        }
    }
    return 0;
}