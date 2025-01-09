#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    string id;
    int grade;
    int other_grade;
    
    student(string id,int grade,int other_grade) {
        this->id=id;
        this->grade=grade;
        this->other_grade=other_grade;
    }
    bool isExcellent() {
        if(grade+other_grade>140&&grade*7+other_grade*3>=800) 
            return true;
        return false;
    }
};
int main() {
    int n;
    cin>>n;
    vector<student> s;
    for(int i=0;i<n;i++) {
        string id;
        cin>>id;
        int grade;
        cin>>grade;
        int other_grade;
        cin>>other_grade;
        s.push_back(student (id,grade,other_grade));
    }
    // for(student i:s) {
    //     cout<<i.id<<endl;
    // }
    for(student i:s) {
        if(i.isExcellent()==true) cout<<"Excellent"<<endl;
        else cout<<"Not excellent"<<endl;
    }
    return 0;
}