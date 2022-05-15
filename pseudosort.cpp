#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
void sol(){
    ll n;
    cin>>n;
    int c=0;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        if(a[i]<a[i-1] && i>0){
            swap(a[i],a[i-1]);
            if(a[i-1]<a[i-2] && i>1){
                c+=2;
            }else{
                c++;
            }
        }
    }
    if(c>1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}