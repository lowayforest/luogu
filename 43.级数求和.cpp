#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,sum=0;
    int i=1;
    cin>>n;
    while (sum<=n)
    {
        sum=sum+1.0/(double)(i++);
        
    }
    cout<<i-1<<endl;
    return 0;
    
}