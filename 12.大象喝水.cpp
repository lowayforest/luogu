#include<bits/stdc++.h>
using namespace std;
int main () {
    double h,r,v,n;
    cin>>h>>r;
    v=r*r*h*3.14;
    n=20000/v;
    if(n-(int)n==0)
        cout<<(int)n<<endl;
    else
        cout<<(int)(n+1)<<endl;
    return 0;

}