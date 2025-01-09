#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a,b,c,p,s;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=p*(p-a)*(p-c)*(p-b);
    printf("%.1lf",sqrt(s));
    return 0;
}