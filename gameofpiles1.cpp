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
        int n;cin>>n;
        int a[n],s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(*min_element(a,a+n)==1){
            cout<<"CHEF"<<endl;
            continue;
        }
        int spend=s%2;
        if(spend & 1){
            cout<<"CHEF"<<endl;
        }else {
            cout<<"CHEFINA"<<endl;
        }
    }
    return 0;
}