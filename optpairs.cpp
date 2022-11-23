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
        int n,ans=0;
        cin>>n;
        //vector<pair<int,int>>v;
        for(int i=0;i*i<n;i++){
            if(n%i==0){
                int div1=i,div2=n/i;
                if(div2==2)++ans;
                else ans+=2;

                if(div1!=div2 && div2!=n){
                    if(div1==2) ++ans;
                    else ans+=2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}