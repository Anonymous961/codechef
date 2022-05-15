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
        ll n;
        cin>>n;
        ll h[n];
        int c=0,ans=0;
        for(ll i=0;i<n;i++){
            cin>>h[i];
        }
        vi ex;
        int ma=*max_element(h,h+n);
        sort(h,h+n);
        for(ll i=0;i<n;i++){
            if(h[i]==h[i+1]){
                ans=h[i+1];
                c++;
            }else if(ans<h[i+1] && h[i+1]==h[i+2]){
                ex.push_back(ans+c);
                c=0;
            }else{
                ex.push_back(ans+c);
            }
        }
        int nm=*max_element(ex.begin(),ex.end());
        if(n>1){
            cout<<max(nm,ma)<<endl;
        }else{
            cout<<h[0]<<endl;
        }
    }
    return 0;
}