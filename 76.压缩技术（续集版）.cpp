#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin>>input;
    int n=input.size(),flag=1,count0=0,count1=0;
    
    vector<string> a;
    
    a.push_back(input);
    int line=1;
    for(int i=1;i<n;i++) {
        string s;
        if(cin>>s) a.push_back(s);
        else break;
    }
    
    // for(int i=0;i<n;i++) {
    //     cout<<a[i]<<endl;
    // }
    cout<<n<<' ';
    if(a[0][0]!='0') cout<<0<< ' ';
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j]=='0') {
                if(count1!=0) {
                    cout<<count1<<' ';
                    count1=0;
                }
                count0++;
            } 
                
            else if(a[i][j]=='1') {
                if(count0!=0) {
                    cout<<count0<<' ';
                    count0=0;
                }
                count1++;}
            if(i==n-1&&j==n-1) {
                // cout<<count0;
                if(count0!=0) cout<<count0<<' ';
                else cout<<count1<<' ';
            }
            
            
        }
    }
    system("pause");
    return 0;
}
