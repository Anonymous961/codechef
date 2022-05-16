#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]>x || a[n-1]<x){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}