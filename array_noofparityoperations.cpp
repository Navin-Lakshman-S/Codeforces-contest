#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int odd=0,eve=0;
        vector<int> oddec,evec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(x%2==0) {
                eve++;
                evec.push_back(i);}
            else {odd++;
            oddec.push_back(i);}
        }
        if(odd==0 || eve==0){
        cout<<0;
        continue;}
        int op=0;
        while(evec.size()!=0){
            int en=v[evec[0]],odn=v[oddec[0]];
            if(en>odn){
                op++;
                //cout<<evec.size()<<endl;
                v[oddec[0]]=en+odn;
                //oddec.push_back(evec[0]);
                //evec.erase(evec.begin());
                //cout<<evec.size()<<endl;
                //cout<<"op"<<op<<endl;
                }
            else if(en<odn){
                op++;
                //cout<<"sz"<<evec.size()<<endl;
                v[evec[0]]=odn+en;
                oddec.insert(oddec.begin(),evec[0]);
                evec.erase(evec.begin());
                //cout<<"sz1"<<evec.size()<<endl;
                //cout<<"op1"<<op<<endl;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}