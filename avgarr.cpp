#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
void solve(){
    ll n,x;
    cin>>n>>x;
    for(int i=1;i<=n/2;i++){
        cout<<x-i<<" ";
    }
    if(n%2==1){
        cout<<x<<" ";
    }
    for(int i=1;i<=n/2;i++){
        cout<<x+i<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}