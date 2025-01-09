#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    string s;
    cin>>s;
    vector<string> str;
    for(int i=0;i<q;i++) {
        int d;
        cin>>d;
        if(d==1) {
            string c;
            cin>>c;
            s=s+c;
            str.push_back(s);
        }
        else if(d==2) {
            int a,b;
            cin>>a>>b;
            s=s.substr(a,b);
            str.push_back(s);
        }
        else if(d==3) {
            int a;
            cin>>a;
            string c;
            cin>>c;
            s.insert(a,c);
            str.push_back(s);
        }
        else {
            string c;
            cin>>c;
            int pos=s.find(c);
            str.push_back(to_string(pos));
        }
    }
    for(string c:str) {
        cout<<c<<endl;
    }
    return 0;
}