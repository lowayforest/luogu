#include <iostream>
using namespace std;
int main () {
    for(int i=0;i<3;i++) {
        for(int j=2-i;j>0;j--) {
            cout<<" ";
        }
        for(int k=2*i+1;k>0;k--) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<2;i++) {
        for(int j=i+1;j>0;j--) {
            cout<<" ";
        }
        for(int k = 3-2*i;k>0;k--) {
            cout<<"*";
        }
        if(i!=1)
            cout<<endl;
    }
    return 0;
}