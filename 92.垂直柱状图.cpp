#include <bits/stdc++.h>
using namespace std;
bool isLetter(char a) {
    if(a>='A'&&a<='Z') return true;
    else return false;
}
vector<int> a(26);
int main() {
    for(int i=0;i<4;i++) {
        string s;
        getline(cin,s);
        for(int j=0;j<s.size();j++) {
            if(isLetter(s[j])==true) {
                a[s[j]-'A']++;
            }
        }
    }
    // for(int i=0;i<26;i++) {
    //     cout<<a[i]<<' ';
    // }
    int m=0;
    for(int i=0;i<26;i++) {
        m=max(m,a[i]);
    }
    // cout<<m<<endl;
    int t=m;
    for(int i=0;i<m;i++) {
        for(int j=0;j<26;j++) {
            if(a[j]-t==0) {
                cout<<'*';
                a[j]--;
            }
            else{
                cout<<' ';
            }
            cout<<' ';
        }
        t--;
        
            cout<<endl;

    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
    return 0;
}