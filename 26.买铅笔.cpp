// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,n1,n2,n3,p1,p2,p3,s1,s2,s3;
//     cin>>n;
//     cin>>n1>>p1;
//     cin>>n2>>p2;
//     cin>>n3>>p3;
//     if(n%n1==0) {
//         s1=n/n1;
//     }
//     else
//         s1=n/n1+1;
//     if(n%n2==0) {
//         s2=n/n2;
//     }
//     else
//         s3=n/n3+1;
//     if(n%n3==0) {
//         s3=n/n3;
//     }
//     else
//         s3=n/n3+1;
//     cout<<min(min(s1*p1,s2*p2),s3*p3);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
long n,a1,a2,b1,b2,c1,c2,pen1,pen2,pen3,x[3];
int compare(int a1,int a2,int b1,int b2,int c1,int c2)
{
    while(pen1<n)  { pen1+=a1; x[0]+=a2; }
    while(pen2<n)  { pen2+=b1; x[1]+=b2; }
    while(pen3<n)  { pen3+=c1; x[2]+=c2; }
    return x[0],x[1],x[2];
}
int main()
{
    cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
    compare(a1,a2,b1,b2,c1,c2);
    sort(x,x+3);
    cout<<x[0];
    return 0;
}