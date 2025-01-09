#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    int a;
    int b;
    int c;
    int sum;
    student(int a,int b,int c) {
        this->a=a;
        this->b=b;
        this->c=c;
        sum=a+b+c;

    }
};
int main() {
    int n,count=0;
    cin>>n;
    vector<student> a;
    for(int i=0;i<n;i++) {
        int x,y,z;
        cin>>x>>y>>z;
        student t(x,y,z);
        a.push_back(t);
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            //cout<<abs(a[i].a-a[j].a)<<endl<<abs(a[i].c-a[j].c)<<endl<<abs(a[i].b-a[j].b)<<endl<<abs(a[i].sum-a[j].sum)<<endl;
            if(abs(a[i].a-a[j].a)<=5&&abs(a[i].c-a[j].c)<=5&&abs(a[i].b-a[j].b)<=5&&abs(a[i].sum-a[j].sum)<=10){
                //cout<<abs(a[i].a-a[j].a)<<endl<<abs(a[i].c-a[j].c)<<endl<<abs(a[i].b-a[j].b)<<endl<<abs(a[i].sum-a[j].sum)<<endl;
                count ++;
            }
                
        }
    }
    cout<<count<<endl;
    return 0;
}