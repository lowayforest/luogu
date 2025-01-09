#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age;
    int grade;
    student(string name,int age,int grade) {
        this->age=age;
        this->grade=grade;
        this->name=name;
    }
    void training() {
        age++;
        grade=grade*12/10;
        // grade=grade/5;
        // grade=grade*5;
        if(grade>600) grade=600;
    }
    
};
int main() {
    int n;
    cin>>n;
    vector<student> s;
    for(int i=0;i<n;i++) {
        string name;
        cin>>name;
        int age;
        cin >>age;
        int grade;
        cin>>grade;
        s.push_back(student(name,age,grade));
    }
    for(student i:s) {
        i.training();
        cout<<i.name<<' '<<i.age<<" "<<i.grade<<endl;

    }
    return 0;
}