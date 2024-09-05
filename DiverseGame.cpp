#include<bits/stdc++.h>
using namespace std;
void diverseGame(int n,int m){
    vector<vector<int>> fv;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<m;j++){
            int n;
            cin>>n;
            v.push_back(n);
        }
        fv.push_back(v);
    }
    if(n==1 && m==1){
        cout<<-1;
        return;}
    vector<vector<int>> fg(fv.begin(),fv.end());
    for(int i=0;i<n;i++){
        int ox=fv[i][0];
        fv[i].erase(fv[i].begin());
        fv[i].push_back(ox);
        if(i<n-1){swap(fv[i],fv[i+1]);}
    }
    for(int i=0;i<n-1;i++){
        swap(fv[i],fv[i+1]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<fv[i][j]<<" ";
            }
            cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(fg[i][j]==fv[i][j]){cout<<-1; return;}
        }
    }
}
int main(){
    int t,n,m;
    cin>>t;
    while(t-->0){
        cin>>n>>m;
        diverseGame(n,m);

    }
}

