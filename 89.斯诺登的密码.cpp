#include <bits/stdc++.h>
using namespace std;
string word[30]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both","another","first","second","third"};
int num[30]={0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
string s;
vector<int> ans;
//int k=0;
int main() {
     for(int i=0;i<6;i++) {
        cin>>s;
        for(int j=0;j<30;j++) {
            if(s==word[j]) {
                ans.push_back(num[j]);
                // cout<<ans[k];
                //k++;
                break;
            }
        }
     }
     sort(ans.begin(),ans.end());
    
     int i=0;
    while(i<ans.size()&&ans[i]==0) i++;
    if(i==ans.size()){
        cout << "0";
        return 0;
    }
    
    //for(int i:ans) cout<<i;
     for(int j=i;j<ans.size();j++) {
        if(j!=i&&ans[j]<10) cout<<0;
        cout<<ans[j];
     }
     return 0;
     
}