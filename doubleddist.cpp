#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
bool sol(int b[],int n){
    for(int i=1;i<n-1;i++){
        if(b[i]*2==b[i-1] || b[i-1]*2==b[i]){
            int flag=1;
        }else{
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        int b[n-1];
        for(int i=0;i<n-1;i++){
            b[i]=a[i+1]-a[i];
        }
        // for(int i=0;i<n-1;i++){
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=1;i<n-1;i++){
        //     if(b[i]*2==b[i-1] || b[i-1]*2==b[i]){
        //         flag=1;
        //     }
        // }
        if(sol(b,n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}