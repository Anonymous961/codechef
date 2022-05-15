#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y,s=0;
        cin>>n>>x>>y;
        if(n>1){
            s=2*(n-1);
        }
        s=(min(x,y)-1)+(n-max(x,y))+(min((n-x),(y-1)))+min((x-1),(n-y));
        cout<<s+2*(n-1)<<endl;
    }
    return 0;
}