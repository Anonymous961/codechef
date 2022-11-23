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

int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        ll maxT,maxN,maxS,d;
        cin>>maxT>>maxN>>maxS;
        ll sum=0;
        d=maxS/maxN;
        d=min(maxT,d);
        for(int i=0;i<d;i++){
            maxS-=maxN;
            sum+=pow(maxN,2);
            // cout<<maxN<<' '<<pow(maxN,2)<<' '<<sum<<endl;
            maxT--;
        }
        if(maxT){
            sum+=pow(maxS,2);
        }
        cout<<sum<<endl;
    }
    return 0;
}