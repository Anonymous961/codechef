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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        bool f=1;
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<i*2;j++){
            if(k>=1 && f){
                cout<<k;
                k--;
                if(k==1){
                    f=0;
                }
            }else if(k<=i){
                cout<<k;
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}