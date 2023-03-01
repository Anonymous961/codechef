#include<bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MAX 10000001
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
    ll n,k,s;
    cin>>n>>k>>s;
    ll su=1;
    vector<ll,ll>v;
    bool flag =0,flag2=false;
    while(s>=su || s>=k){
        if(su==s){
            flag = 1;
            break;
        }else if(su==k){
            flag2=1;
            break;
        }
    }
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