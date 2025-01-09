#include <bits/stdc++.h>
using namespace std;
vector<double> score;
double avg(vector<double> a,int m) {
    sort(a.begin(),a.end());
    double sum=0;
    for(int i=1;i<m-1;i++) {
        sum+=a[i];
    }
    return sum/((m-2)*1.0);
 }
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
         vector<double> a;
         for(int j=0;j<m;j++) {
            double t;
            cin>>t;
            a.push_back(t);
         }
         score.push_back(avg(a,m));
        }
        sort(score.begin(),score.end());
        printf("%.2lf",score[n-1]);
        return 0;

}