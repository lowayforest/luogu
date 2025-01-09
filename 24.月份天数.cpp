#include <bits/stdc++.h>
using namespace std;

int main() {
    int y,n;
    cin>>y>>n;
    int flag=0;
    if(y%4==0&&y%100!=0||y%400==0) {
        flag=1;
    }
    else
        flag=0;
    if(flag==1) {
        if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
            cout<<31<<endl;
        else if(n==4||n==6||n==9||n==11)
            cout<<30<<endl;
        else
            cout<<29<<endl;
    }
    else {
        if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
            cout<<31<<endl;
        else if(n==4||n==6||n==9||n==11)
            cout<<30<<endl;
        else
            cout<<28<<endl;
    }
    return 0;
}