#include <bits/stdc++.h>
using namespace std;

// struct Compare {
//     bool operator()(pair<int,int> a,pair<int,int> b) {
//         return a.second>b.second;
//     }
// };

// void swap(int &a,int &b) {
//     int t;
//     t=a;
//     a=b;
//     b=a;
// }



// void swap(vector<pair<int,int>>&vec,int a,int b) {
//     pair<int,int> t;
//     t=vec[a];
//     vec[a]=vec[b];
//     vec[b]=t;
// }

int main() {
    int a,b,c,d,e,f,g;
    int a1,b1,c1,d1,e1,f1,g1;
    cin>>a>>a1;
    cin>>b>>b1;
    cin>>c>>c1;


    cin>>d>>d1;
    cin>>e>>e1;
    cin>>f>>f1;
    cin>>g>>g1;
    // priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> Mheap;
    //unordered_map<int,int>  map;
    
    vector<pair<int,int>> vec(7);
    vec[0]={1,a+a1};
    vec[1]={2,b+b1};
    vec[2]={3,c+c1};
    vec[3]={4,d+d1};
    vec[4]={5,e+e1};
    vec[5]={6,f+f1};
    vec[6]={7,g+g1};

    // cout<<endl;
    // for(auto& pair:vec) {
    //     cout<<pair.first<<" "<<pair.second<<endl;
    // }
    // map[1]=a+a1;
    // map[2]=b+b1;
    // map[3]=c+c1;
    // map[4]=d+d1;
    // map[5]=e+e1;
    // map[6]=f+f1;
    // map[7]=g+g1;
    //cout<<endl;
    // for(auto& pair:map) {
    //     cout<<pair.first<<" "<<pair.second<<endl;
    // }
    
    // for(const auto& pair :map) {
    //     vec.push_back(pair);
    // }
    // cout<<endl;
    int count=0;
    for(const auto& pair :vec) {
        if(pair.second<=8) {
            count++;
        }
    }
    if(count==7) {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<7;i++) {
        for(int j=0;j<6-i;j++) {
            if(vec[j].second<vec[j+1].second)
                //swap(vec,j,j+1);
                swap(vec[j+1],vec[j]);

        }
        
    }
    // cout<<endl;
    // for(auto& pair:vec) {
    //     cout<<pair.first<<" "<<pair.second<<endl;
    // }

    //cout<<vec.begin()->first<<endl;
    // vector<pair<int,int>> vec;
    // for(const auto& pair :map) {
    //     vec.push_back(pair);
    // }
    // sort(vec.begin(),vec.end(),Compare());
    // cout<<vec.begin()->first<<endl;
   
    // for (const auto& pair : map)
    //     Mheap.push(pair);
    // cout<<Mheap.top().first<<endl;
    cout<<vec.begin()->first<<endl;
    return 0;
}