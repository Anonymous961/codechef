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
    ll a[n],b[n],c[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    // ll d[n]=b;
    // sort(d,d+n,greater  <int>());
    for(int i=0;i<n;i++){
        if(i<n/2){
            c[i]=a[i]+b[i];
        }else{
            c[i]=a[i]+b[n-i-1+n/2];
        }
    }
    sort(c,c+n);
    // for(int i=0;i<n;i++){
    //     cout<<c[i]<<" ";
    // }
    // cout<<endl;
    cout<<c[n/2]<<endl;
}
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}