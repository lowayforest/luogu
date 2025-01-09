#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> x >> n;
    int b =6-x;
    int a;
    if(b<=0)
        a=0;
    else
        a=b;
    n = n-(8-x);
    int l = n % 7;
    int w = n / 7;
    // cout<<w<<endl<<l<<endl;
    if (l <= 5)
        cout << w * 5 * 250 + l * 250 +a*250<< endl;
    else
        cout << w * 5 * 250 + 5 * 250 +a*250<< endl;
    return 0;
}