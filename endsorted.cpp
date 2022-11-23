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
int find(int x,int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int mx=*max_element(p,p+n);
        int mn=*min_element(p,p+n);
        auto mx_id=find(mx,p,n);
        auto mn_id=find(mn,p,n);
        // cout<<mx_id<<" "<<mn_id<<endl;
        mx_id=n-1-mx_id;
        int steps=mx_id+mn_id;
        if(steps>=n){
            steps--;
            cout<<steps<<endl;
        }else{
            cout<<steps<<endl;
        }
    }
    return 0;
}