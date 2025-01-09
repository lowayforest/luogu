#include <bits/stdc++.h>
using namespace std;
bool isPrimeNumber (int a) {
    if(a==2)
        return 1;
    for(int i=3;i<=sqrt(a);i=i+2) {
        if(a % i == 0) return 0;
    }
    return 1;
}


bool isPalindromicNumber(int a) {
    if(a<0)
    return false;
    int r=0;
    while(a>r) {
        int last=a%10;
        r=r*10+last;
        a=a/10;
    }
    return r==a||r/10==a;

}
int main() {
    int a,b;
    cin>>a>>b;
    if(a%2==0)a++;
    if(b>10000000) b=10000000;
    for(int i=a;i<=b;i=i+2) {
        if(!isPalindromicNumber(i))
            continue;
        if(!isPrimeNumber(i))
            continue;
        printf("%d\n",i);
    }
    return 0;
}