// #include <iostream>
// #include <cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, v, flag = 0;
    int t;
    cin >> s >> v;
    if(s==0)
        cout<<"08:00"<<endl;
    if(s%v==0)
        t = s / v ;
    else
        t = s / v + 1;
    int j = 10 + t;
    int y = j / 60;
    int h = 8 - 1 - y;
    int m = 60-j % 60;
    if (h < 0)
    {
        flag = 1;
        h = 24 + h;
    }
    // cout<<flag<<endl;
    if (flag == 1)
        cout << h << ':';
    else
        cout << 0 << h << ':';
    if (m / 10 == 0)
        cout << 0 << m << endl;
    else
        cout<<m<<endl;
    return 0;
}