#include <bits/stdc++.h>
using namespace std;
int n;
char a[15][15],b[15][15],c[15][15],d[15][15];
int work1() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            c[i][j]=a[n-j+1][i];
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n;j++) {
    //         cout<<c[i][j];
    //     }
    //     cout<<endl;
    //}
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(b[i][j]!=c[i][j])
            return 0;
        }
    }
    return 1;
}
int work2() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            c[i][j]=a[n-i+1][n-j+1];
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n;j++) {
    //         cout<<c[i][j];
    //     }
    //     cout<<endl;
    //}
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(b[i][j]!=c[i][j])
            return 0;
        }
    }
    return 1;
}
int work3() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            c[i][j]=a[j][n-i+1];
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n;j++) {
    //         cout<<c[i][j];
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(b[i][j]!=c[i][j])
            return 0;
        }
    }
    return 1;
}
int work4() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            c[i][j]=a[i][n-j+1];
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n;j++) {
    //         cout<<c[i][j];
    //     }
    //     cout<<endl;
    //}
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(b[i][j]!=c[i][j])
            return 0;
        }
    }
    return 1;
}
int work5() {
    work4();
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            a[i][j]=c[i][j];
        }
    }
    if(work1()==1)
        return 1;
    if(work2()==1)
        return 1;
    if(work3()==1)
        return 1;
    return 0;
}
int work6() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(a[i][j]!=b[i][j]) return 0;
        }
    }
    return 1;
}
int main() {
    
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin>>b[i][j];
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n;j++) {
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n;j++) {
    //         cout<<b[i][j];
    //     }
    //     cout<<endl;
    // }
    
    if(work1()==1)
        cout<<1<<endl;
    else if(work2()==1)
        cout<<2<<endl;
    else if(work3()==1)
        cout<<3<<endl;
    else if(work4()==1)
        cout<<4<<endl;
    else if(work5()==1) {
        cout<<5<<endl;
    }
    else if(work6()==1) {
        cout<<6<<endl;
    }
    else
        cout<<7<<endl;
    
    return 0;
}