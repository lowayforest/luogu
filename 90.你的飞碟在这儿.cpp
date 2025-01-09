#include <bits/stdc++.h>
using namespace std;
string s1;
string s2;

int main() {
    cin >>s1;
    cin>>s2;
    int product1=1;
    int product2=1;
    for(int i=0;i<s1.size();i++) {
        product1*=s1[i]-'A'+1;
    }
    for(int i=0;i<s2.size();i++) {
        product2*=s2[i]-'A'+1;
    }
    if(product1%47==product2%47) cout<<"GO"<<endl;
    else cout <<"STAY"<<endl;
    return 0;
}