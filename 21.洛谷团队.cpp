#include<bits/stdc++.h>
using namespace std;
int main() {
    int local,luogu;
    int n;
    cin>>n;
    local=5*n;
    luogu=11+3*n;
    if(local<luogu)
        cout<<"Local"<<endl;
    else
        cout<<"Luogu"<<endl;
    return 0;
}