#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return fact(n-1)*n;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;
        int a[n],b[n];
        vector<pair<int,int>>v;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            v.push_back(make_pair(a[i],b[i]));
        }
        
        cout<<c<<endl;
    }
    return 0;
}