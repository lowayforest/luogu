#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[10];
    cin.getline(a,10);
    int count=0;
    for(int i=0;i<strlen(a);i++) {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]>='0'&&a[i]<='9') count++;
    }
    cout<<count<<endl;
    return 0;
}