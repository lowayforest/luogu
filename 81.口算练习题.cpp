#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    stringstream stream;
    char flag;
    int a,b;
    char s1[100];
    cin>>n;
    vector<string> c;
    for(int i=1;i<=n;i++) {
        cin>>s;
        if(s[0]>='a'&&s[0]<='c') {
            flag=s[0];
            cin>>a>>b;
        }
        else {
            stream.clear();
            stream<<s;
            stream>>a;
            cin>>b;
        }
        // if(flag=='a') sprintf(s1,"%d+%d=%d",a,b,a+b);
        // else if(flag=='b') sprintf(s1,"%d-%d=%d",a,b,a-b);
        // else sprintf(s1,"%d*%d=%d",a,b,a*b);
        // cout<<s1<<endl<<strlen(s1)<<endl;
        if(flag=='a'){
            sprintf(s1,"%d+%d=%d",a,b,a+b);
            
        } 
        else if(flag=='b') {
            sprintf(s1,"%d-%d=%d",a,b,a-b);
        } 
        else {
            sprintf(s1,"%d*%d=%d",a,b,a*b);
        } 
        c.push_back(s1);
    }
    for(string s:c) {
        cout<<s<<endl<<s.size()<<endl;
    }
    return 0;
}