#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int ow=0;
        if(a1>b1 && a2>b2){ow++;}
        if(a1>b2 && a2>b1){ow++;}
        if(a2>b2 && a1>b1){ow++;}
        if(a2>b1 && a1>b2){ow++;}
        
        cout<<ow<<endl;
    }
        
}
