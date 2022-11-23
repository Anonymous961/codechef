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
int _ceil(int n){return n%2==0?n/2:n/2+1;}
int main(){
    fastio();
    ll t;
    cin>>t;
    int c='a';
    while(t--){
        ll n,x;
        cin>>n>>x;
        string b="",s;
        if(n<2*x-1){
            cout<<-1<<endl;
        }else{
            string ans=string(n,'a');
            for(int i=1;i<x;i++){
                ans[i]='a'+i;
                ans[n-1-i]='a'+i;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}