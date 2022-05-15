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
        int n,k,v,s=0;
        cin>>n>>k>>v;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        int ns=(v*(n+k)-s)/k;
        if(s+k*ns==(n+k)*v && ns>0){
            cout<<ns<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}