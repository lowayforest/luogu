#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int pos,bcount=0,gcount=0;
    pos=s.find("boy");
    while(pos!=-1) {
        bcount++;
        s[pos]='.';
        s[pos+1]='.';
        s[pos+2]='.';
        pos=s.find("boy",pos+1);
    }
    pos=s.find("girl");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        s[pos+1]='.';
        s[pos+2]='.';
        s[pos+3]='.';
        pos=s.find("girl",pos+1);
    }
    pos=s.find("oy");
    while(pos!=-1) {
        bcount++;
        s[pos]='.';
        s[pos+1]='.';
        pos=s.find("oy",pos+1);
    }
    pos=s.find("bo");
    while(pos!=-1) {
        bcount++;
        s[pos]='.';
        s[pos+1]='.';
        pos=s.find("bo",pos+1);
    }
    pos=s.find("gir");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        s[pos+1]='.';
        s[pos+2]='.';
        pos=s.find("gir",pos+1);
    }
    pos=s.find("irl");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        s[pos+1]='.';
        s[pos+2]='.';
        pos=s.find("irl",pos+1);
    }
    pos=s.find("gi");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        s[pos+1]='.';
        pos=s.find("gi",pos+1);
    }
    pos=s.find("ir");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        s[pos+1]='.';
        pos=s.find("ir",pos+1);
    }
    pos=s.find("rl");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        s[pos+1]='.';
        pos=s.find("rl",pos+1);
    }
    pos=s.find("g");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        pos=s.find("g",pos+1);
    }
    pos=s.find("i");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        pos=s.find("i",pos+1);
    }
    pos=s.find("r");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        pos=s.find("r",pos+1);
    }
    pos=s.find("l");
    while(pos!=-1) {
        gcount++;
        s[pos]='.';
        pos=s.find("l",pos+1);
    }
    pos=s.find("y");
    while(pos!=-1) {
        bcount++;
        s[pos]='.';
        pos=s.find("y",pos+1);
    }
    pos=s.find("b");
    while(pos!=-1) {
        bcount++;
        s[pos]='.';
        pos=s.find("b",pos+1);
    }
    pos=s.find("o");
    while(pos!=-1) {
        bcount++;
        s[pos]='.';
        pos=s.find("o",pos+1);
    }
    
    cout<<bcount<<endl<<gcount<<endl;
    return 0;
}