#include <bits/stdc++.h>
using namespace std;
long long reverseInt(long long a) {
    long long ans=0;
    while(a>0) {
        ans=ans*10+a%10;
        a=a/10;
    }
    return ans;
}

int main() {
    string s,a,b;
    stringstream stream;
    int flagPositive=0;
    long long c,d;
    cin>>s;
    int flag=1;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='.') {
            flag=2;
            a=s.substr(0,i);
            b=s.substr(i+1);
        }
        if(s[i]=='/') {
            flag=3;
            a=s.substr(0,i);
            b=s.substr(i+1);
            break;
        }
        if(s[i]=='%') {
            flag=4;
            a=s.substr(0,i);
            break;
        }
        
        }
    if(s.size()<20) {
        
    if(flag==1) {
            stream.clear();
            stream<<s;
            stream>>c;
            //cout<<c;
            if(c<0) {
                c=-c;
                cout<<-reverseInt(c)<<endl;
            }
            else {
                cout<<reverseInt(c)<<endl;
            }
        }
    if(flag==2) {
        //cout<<a<<endl<<b<<endl;
        stream.clear();
        stream<<a;
        stream>>c;
        stream.clear();
        stream<<b;
        stream>>d;
        //cout<<c<<endl<<d<<endl;
        if(c<0) {
                c=-c;
                cout<<-reverseInt(c)<<'.'<<reverseInt(d)<<endl;
            }
        else cout<<reverseInt(c)<<'.'<<reverseInt(d)<<endl;
    }
    if(flag==3) {
        //cout<<a<<endl<<b<<endl;
        stream.clear();
        stream<<a;
        stream>>c;
        stream.clear();
        stream<<b;
        stream>>d;
        //cout<<c<<endl<<d<<endl;
        if(c<0) {
                c=-c;
                cout<<-reverseInt(c)<<'/'<<reverseInt(d)<<endl;
            }
        else cout<<reverseInt(c)<<'/'<<reverseInt(d)<<endl;
    }
    if(flag==4) {
        //cout<<a<<endl<<b<<endl;
        stream.clear();
        stream<<a;
        stream>>c;
        
         if(c<0) {
                c=-c;
                cout<<-reverseInt(c)<<'%'<<endl;
            }
            else {
                cout<<reverseInt(c)<<'%'<<endl;
            }
    }
    }
    else {
        if(flag==1) {
            if(s[0]=='-') {
                reverse(s.begin(),s.end());
                s.erase(s.size()-1);
                cout<<'-';
                for(int i=0;i<s.size();i++) {
                    if(s[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<s[i];
                    }
                }
            }
            else {
                reverse(s.begin(),s.end());
                for(int i=0;i<s.size();i++) {
                    if(s[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<s[i];
                    }
                }
            }
        }

        if(flag==2) {
            if(s[0]=='-') {
                reverse(a.begin(),a.end());
                s.erase(a.size()-1);
                cout<<'-';
                for(int i=0;i<s.size();i++) {
                    if(a[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<a[i];
                    }
                }
                cout<<'.';
                
                for(int i=0;i<b.size();i++) {
                    if(b[i]=='0') {
                        s.erase(i,1);
                    }
                    else {
                        break;
                    }
                }
                int pos=b.find_first_not_of('0');
                b=b.substr(pos);
                reverse(b.begin(),b.end());
                flagPositive=0;
                for(int i=0;i<b.size();i++) {
                    if(b[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<b[i];
                    }
                }
            }
            else {
                reverse(a.begin(),a.end());
                s.erase(a.size()-1);
                
                for(int i=0;i<a.size();i++) {
                    if(a[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<a[i];
                    }
                }
                cout<<'.';
                int pos=b.find_first_not_of('0');
                b=b.substr(pos);
                //cout<<b<<endl;
                reverse(b.begin(),b.end());
                flagPositive=0;
                for(int i=0;i<b.size();i++) {
                    if(b[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<b[i];
                    }
                }
            }
        }

        if(flag==3) {
            if(s[0]=='-') {
                reverse(a.begin(),a.end());
                s.erase(a.size()-1);
                cout<<'-';
                for(int i=0;i<s.size();i++) {
                    if(a[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<a[i];
                    }
                }
                cout<<'/';
                reverse(b.begin(),b.end());
                flagPositive=0;
                for(int i=0;i<b.size();i++) {
                    if(b[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<b[i];
                    }

                }
                cout<<endl;
            }
            else {
                reverse(a.begin(),a.end());
                s.erase(a.size()-1);
                
                for(int i=0;i<a.size();i++) {
                    if(a[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<a[i];
                    }
                }
                cout<<'/';
                reverse(b.begin(),b.end());
                flagPositive=0;
                for(int i=0;i<b.size();i++) {
                    if(b[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<b[i];
                    }
                }
            }
        }

        if(flag==4) {
            if(s[0]=='-') {
                reverse(a.begin(),a.end());
                a.erase(a.size()-1);
                cout<<'-';
                for(int i=0;i<a.size();i++) {
                    if(a[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<a[i];
                    }
                }
                cout<<'%';
            }
            else {
                reverse(a.begin(),a.end());
                for(int i=0;i<a.size();i++) {
                    if(a[i]=='0'&&flagPositive==0) continue;
                    else {
                        flagPositive=1;
                        cout<<a[i];
                    }
                }
                cout<<'%';
            }
        }
    }
    return 0;
}