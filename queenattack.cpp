#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
bool issafe(int n,int x,int y){
    if(x>=1 && y>=1 && x<=n && y<=n){
        return 1;
    }
    return 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y,s=0;
        cin>>n>>x>>y;
        if(n>1){
            s=2*(n-1);
        }
        for(ll i=1;i<=n;i++){
            if(issafe(n,x+i,y+i)){
                s++;
            }
            if(issafe(n,x+i,y-i)){
                s++;
            }
            if(issafe(n,x-i,y-i)){
                s++;
            }
            if(issafe(n,x-i,y+i)){
                s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}