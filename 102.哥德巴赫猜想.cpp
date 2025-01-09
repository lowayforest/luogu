#include <bits/stdc++.h>
using namespace std;
bool isPrimeNunber(int a) {
    if(a==1||a==0) return false;
    if(a==2)return true;
    if(a%2==0) return false;
    for(int i=3;i<=sqrt(a);i=i+2) {
        if(a%i==0) return false;
    }
    return true;
}
int findNum(int a) {
    for(int i=2;i<=a/2;i++) {
        if(isPrimeNunber(i)==true&&isPrimeNunber(a-i)==true) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    for(int i=4;i<=n;i=i+2) {
        int a=findNum(i);
        cout<<i<<'='<<a<<'+'<<i-a<<endl;
    }
    // cout<<isPrimeNunber(n)<<endl;
    return 0;
}