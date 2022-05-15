#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
int check(int a[],int n){
    for(int i=1;i<n-1;i++){
        if(a[i]*a[i]!=a[i-1]*a[i+1]){
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(check(a,n)){
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=1;i<n;i++){
            if(a[i]*a[i]!=a[i-1]*a[i+1]){
                if(a[i-1]*a[i-1]==a[i]*a[i+1]){
                    swap(a[i-1],a[i]);
                }else if (a[i+1]*a[i+1]==a[i]*a[i-1]){
                    swap(a[i+1],a[i]);
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        if(check(a,n)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}