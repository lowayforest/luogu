#include<bits/stdc++.h>
using namespace std;
int main() {
    double m,h;
    cin>>m>>h;
    double s=m/h/h;
    if(s<18.5)
        cout<<"Underweight"<<endl;
    else if(s<24)
        cout<<"Normal"<<endl;
    else
    cout<<s<<endl<<"Overweight"<<endl;
    return 0;
}