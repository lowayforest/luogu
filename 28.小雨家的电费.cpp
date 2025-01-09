#include <bits/stdc++.h>
using namespace std;
int main() {
    double n;
    cin>>n;
    if(n<=150) {
        printf("%.1lf",0.4463*n);
    }
    else if(n<=400) {
        printf("%.1lf",(0.4463*150+0.4663*(n-150)));
    }
    else {
        printf("%.1lf",(0.4463*150+0.4663*250+0.5663*(n-400)));
    }
    return 0;
}