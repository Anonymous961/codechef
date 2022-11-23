// #include<bits/stdc++.h>
// typedef long long int ll;
// typedef long double lld;
// typedef unsigned long long ull;
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define MOD 1000000007
// #define MOD1 998244353
// #define INF 1e18
// #define vi vector<int>
// #define pii pair<int,int>
// #define pll pair<ll, ll>
// #define mp make_pair
// #define pb push_back
// #define pob pop_back
// #define ff first
// #define ss second
// using namespace std;

// void soln(){
//     ll n;
//     cin>>n;
//     set<int>se;
//     for(int i=0;i<n;i++ ){
//         int x;
//         cin>>x;
//         se.insert(x);
//     }
//     int i=0,arr[se.size()];
//     for(auto it: se){
//         arr[i++]=it;
//     } 
//     int ans=arr[n-1]+arr[n-2]-arr[0]-arr[1];
//     cout<<ans<<endl;
// }

// int main(){
//     fastio();
//     int t;
//     cin>>t;
//     while(t--){
//         soln();
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int c=0,d,a[n];
        a[c]=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]!=a[c]){
                a[c]=arr[i];
                c++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" "<<c<<endl;
        }
    }
}