#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,c="0123456789X";
    cin>>s;
    int i=0,j=0;
    vector<int> a(9);
    for(i=0;i<11;i++) {
        if (i == 1 || i==5)
            continue;
        a[j++]=s[i]-'0';
    }
    //cout<<j<<endl;
    // for(int i:a) {
    //     cout<<i<<endl;
    // }
    int sum=1*a[0]+2*a[1]+3*a[2]+4*a[3]+5*a[4]+6*a[5]+7*a[6]+8*a[7]+9*a[8];
    int remain=sum%11;
    //cout<<remain<<endl;
    if(c[remain]==s[12])
        cout<<"Right"<<endl;
    else {
        cout<<a[0]<<'-'<<a[1]<<a[2]<<a[3]<<'-'<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<'-'<<c[remain]<<endl;
    }
    system("pause");
    return 0;
}