#include <bits/stdc++.h>
using namespace std;
int isLeapYear(int year) {
    if(year%4==0&&year%100!=0) return 1;
    if(year%400==0) return 1;
    return -1;

}
int main() {
    int a,b;
    cin>>a>>b;
    vector<int> c;
    for(int i=a;i<=b;i++) {
        if(isLeapYear(i)==1) {
            c.push_back(i);
        }
    }
    cout<<c.size()<<endl;
    for(int i:c) cout<<i<<' ';
    return 0;
}