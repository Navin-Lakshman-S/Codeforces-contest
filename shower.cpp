#include<bits/stdc++.h>
using namespace std;
#define vii vector<vector<int>>
int main(){
    int t;
    cin>>t;
    vector<string> v;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vii sch;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            sch.push_back({x,y});
        }
        int p=0;
        for(auto i:sch){
            if(i[0]-p>=s){cout<<"yes"<<endl;
            goto end;}
            else{p=i[1];}
        }
        if(m-p>=s){cout<<"yes"<<endl;
        goto end;}
        cout<<"no"<<endl;
        end:;
    }
    for(auto i:v){
        cout<<i<<endl;
    }
}