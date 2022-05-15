#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z,s;
        cin>>x>>y>>z;
        if(z-y>0 && z-y>=x){
            s=(z-y)/x;
            cout<<s<<endl;
        }else{
            cout<<0<<endl;
        }

    }
    return 0;
}