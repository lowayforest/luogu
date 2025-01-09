#include <bits/stdc++.h>
using namespace std;
vector<int> a(12);
int main() {
    int sum=0,save=0;
    //vector<int> a(12);
    for(int i=0;i<12;i++ ) {
        cin>>a[i];
    }
    // for(int i=0;i<12;i++ ) {
    //     cout<<a[i]<<endl;;
    // }
    for(int i=0;i<12;i++) {
        
        sum=sum+300-a[i];
        //cout<<i+1<<" "<<sum<<endl;
        if(sum/100>=1) {
            int t=sum/100;
            save=save+t*100;
            sum=sum-t*100;
            //cout<<i+1<<" "<<sum<<endl;
        }
        if(sum<0) {
           cout<<"-"<<i+1<<endl;
            return 0;
        }
    }
    cout<<save*1.2+sum<<endl;
    return 0;
}