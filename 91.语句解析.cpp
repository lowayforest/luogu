#include <bits/stdc++.h>
using namespace std;
string s;
bool isNumber (char a) {
    if(a<='9'&&a>='0') return true;
    else return false;
}
bool isABC (char a) {
    if(a=='a'||a=='b'||a=='c') return true;
    else return false;
}
bool isMark (char a) {
    if(isNumber(a)==false&&isABC(a)==false) return true;
    else return false;
}
vector<int> a(3);
int main() {
    cin>>s;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='a'&&isMark(s[i+3])==false) { 
            if(isNumber(s[i+3])==true) a[0]=s[i+3]-'0';
            else {
                if(s[i+3]=='b') a[0]=a[1];
                else if(s[i+3]=='c') a[0]=a[2];
            }
        }
        if(s[i]=='b'&&isMark(s[i+3])==false) { 
            if(isNumber(s[i+3])==true) a[1]=s[i+3]-'0';
            else {
                if(s[i+3]=='a') a[1]=a[0];
                else if(s[i+3]=='c') a[1]=a[2];
            }
        }
        if(s[i]=='c'&&isMark(s[i+3])==false) { 
            if(isNumber(s[i+3])==true) a[2]=s[i+3]-'0';
            else {
                if(s[i+3]=='a') a[2]=a[0];
                else if(s[i+3]=='b') a[2]=a[1];
            }
        }
    }
    for(int i=0;i<3;i++) {
        cout<<a[i]<<' ';
    }
    return 0;
}