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
void soln(){
    ll n;
    cin>>n;
    ll arr[n];
    ll s=1,c=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }


    sort(arr,arr+n);
    for(ll i=0;i<n;i++){
        if(s<=n){
            c++;
        }
        s+=arr[i];
    }
    if(s>n){
        cout<<c-1<<endl;
    }else{
        cout<<c<<endl;
    }
}
int main(){
    fastio();
    ll t;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}