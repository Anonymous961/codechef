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
        int n,o=0,z=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                z++;
            }else{
                o++;
            }
        }
        if(o>=z){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}