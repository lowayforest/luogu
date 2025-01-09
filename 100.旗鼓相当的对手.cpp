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
int compare(student a,student b) 
{
    if(abs(a.chinese-b.chinese)<=5&&abs(a.english-b.english)<=5&&abs(a.math-b.math)<=5&&abs(a.total-b.total)<=10)
    return 1;
    return 0;
}
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
    // for(student i:s) {
    //     cout<<i.name<<endl;
    // }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(compare(s[i], s[j])) {
                if(s[i].name < s[j].name) {
                    cout << s[i].name << " " << s[j].name << endl;
                } else {
                    cout << s[j].name << " " << s[i].name << endl;
                }
            }
        }
    }
        // for(student i:a) {
        //     cout<<i.name<<' ';
        // }
        // cout<<endl;
        
        
    
    return 0;
}
