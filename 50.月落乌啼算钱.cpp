#include <bits/stdc++.h>
using namespace std;
int main() {
    double f,t=sqrt(5);
    int n;
    cin>>n;
    double a=(1+t)/2,b=(1-t)/2;
    f=(pow(a,n)-pow(b,n))/t;
    printf("%.2lf",f);
    return 0;
}