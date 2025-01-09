#include<iostream>
using namespace std;
int main() {
    double a,s,b;
    int t;
    cin>>a;
    b=a*10;

    t=(int)b;
    s=t%10*1000;
    t=t/10;
    s=s+t%10*100;
    t=t/10;
    s=s+t%10*10;
    t=t/10;
    s=s+t;
    cout<<(double)s/1000<<endl;
    return 0;
}