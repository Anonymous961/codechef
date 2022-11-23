#include<bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
using namespace std;
int _ceil(int a,int b){return a%b==0?a/b:a/b+1;};
int main(){
    fastio();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        // ll a[100000]{0};
        unordered_map<int,int>mp;

        ll c=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
    
        int ans=0;
        for(auto &pr:mp){
            ans=max(ans,pr.second);
        }
        if(ans<=(n+1)/2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}