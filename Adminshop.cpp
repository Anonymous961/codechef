#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
ll _ceil(ll a,ll b){return a%b==0?a/b:a/b+1;}
int main(){
    int t;
    cin>>t;
    while(t--){
        // ll n,x;
        // cin>>n>>x;
        // ll arr[n];
        // for(ll i=0;i<n;i++){
        //     cin>>arr[i];
        // }
        // int h=0;
        // if(x<=n){
        //     h=n;
        // }else{
        //     int nn = sizeof(arr) / sizeof(arr[0]);
        //     int minn=*min_element(arr,arr+nn);
        //     if(x==minn){
        //         h=n;
        //     }else{
        //         if(x%minn>0){
        //             h=(x/minn)+1;
        //         }else{
        //             h=x/minn;
        //         }
        //     }
        // }
        // cout<<h<<endl;
        ll n,x;
        cin>>n>>x;
        int arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        n=sizeof(arr)/sizeof(arr[0]);
        int mn=*min_element(arr,arr+n);
        ll ans=_ceil(x,mn);
        cout<<max(n,ans)<<endl;
    }
    return 0;
}