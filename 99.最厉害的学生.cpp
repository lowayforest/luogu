#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    string name;
    int chinese=0;
    int math=0;
    int english=0;
    int total=0;
    student(string name,int chinese,int math,int english) {
        this->name=name;
        this->chinese=chinese;
        this->english=english;
        this->math=math;
        total=math+chinese+english;
    }
};
int main() {
    int n;
    cin>>n;
    vector<student> s;
    for(int i=0;i<n;i++) {
        string name;
        cin>>name;
        int chinese;
        cin>>chinese;
        int math;
        cin>>math;
        int english;
        cin>>english;
        student ts(name,chinese,math,english);
        s.push_back(ts);
    }
    for(int i=0;i<n;i++) {
        int flag=0;
        for(int j=0;j<n-i-1;j++) {
            
            if(s[j].total<s[j+1].total) {
                swap(s[j],s[j+1]);
                flag=1;
            }
            
        }
        if(flag==0) break;
    }
    cout<<s[0].name<<' '<<s[0].chinese<<' '<<s[0].math<<' '<<s[0].english<<endl;
    return 0;
}