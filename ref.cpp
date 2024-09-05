#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> vs{{1,2,3},{4,5,6},{0,9,8}};
    swap(vs[0],vs[1]);
    for(auto i:vs){
        for(auto j:i){
            cout<<j<<" ";
            }
            cout<<endl;
            }
            return 0;

}
