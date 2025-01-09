#include <bits/stdc++.h>
using namespace std;
string a[10][5];
int main() {
    int n;
    cin>>n;
    a[0][0]="XXX";
    a[0][1]="X.X";
    a[0][2]="X.X";
    a[0][3]="X.X";
    a[0][4]="XXX";

    a[1][0]="..X";
    a[1][1]="..X";
    a[1][2]="..X";
    a[1][3]="..X";
    a[1][4]="..X";

    a[2][0]="XXX";
    a[2][1]="..X";
    a[2][2]="XXX";
    a[2][3]="X..";
    a[2][4]="XXX";

    a[3][0]="XXX";
    a[3][1]="..X";
    a[3][2]="XXX";
    a[3][3]="..X";
    a[3][4]="XXX";

    a[4][0]="X.X";
    a[4][1]="X.X";
    a[4][2]="XXX";
    a[4][3]="..X";
    a[4][4]="..X";

    a[5][0]="XXX";
    a[5][1]="X..";
    a[5][2]="XXX";
    a[5][3]="..X";
    a[5][4]="XXX";

    a[6][0]="XXX";
    a[6][1]="X..";
    a[6][2]="XXX";
    a[6][3]="X.X";
    a[6][4]="XXX";

    a[7][0]="XXX";
    a[7][1]="..X";
    a[7][2]="..X";
    a[7][3]="..X";
    a[7][4]="..X";

    a[8][0]="XXX";
    a[8][1]="X.X";
    a[8][2]="XXX";
    a[8][3]="X.X";
    a[8][4]="XXX";

    a[9][0]="XXX";
    a[9][1]="X.X";
    a[9][2]="XXX";
    a[9][3]="..X";
    a[9][4]="XXX";

    string s;
    cin>>s;
    for(int i=0;i<5;i++)  {
        for(int j=0;j<n;j++) {
            int x=s[j]-'0';
            cout<<a[x][i];
            if(j==n-1) {
                break;
            }
            else { 
                cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}