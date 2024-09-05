#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        unordered_map<char,int> um;
        int n;
        cin>>n;
        string mrk;
        cin>>mrk;
        for(auto i:mrk){
            um[i]++;
        }
        int sum=0;
        for(pair<char,int> p:um){
            if(p.first=='?'){continue;}
            else if(p.first!='?' && p.second<=n){
                sum+=p.second;
            }
            else if(p.first!='?' && p.second>n){
                sum+=n;
            }
        }
        cout<<sum<<endl;
    }
}
