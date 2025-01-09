#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int t[3];
    t[0]=a;
    t[1]=b;
    t[2]=c;
    sort(t,t+3,greater<int>());
    // for(int i:t)
    //     {
    //         cout<<i<<endl;
    //     }
    if(t[0]>=t[1]+t[2])
        cout<<"Not triangle"<<endl;
    else{
        if(t[0]*t[0]==t[1]*t[1]+t[2]*t[2])
            cout<<"Right triangle"<<endl;
        if(t[0]*t[0]<t[1]*t[1]+t[2]*t[2])
            cout<<"Acute triangle"<<endl;
        if(t[0]*t[0]>t[1]*t[1]+t[2]*t[2])
            cout<<"Obtuse triangle"<<endl;
        if(t[0]==t[1]||t[0]==t[2]||t[2]==t[1])
            cout<<"Isosceles triangle"<<endl;
        if(t[0]==t[1]&&t[0]==t[2])
            cout<<"Equilateral triangle"<<endl;

    }
    return 0;
    
}