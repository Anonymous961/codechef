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
        int n,x,r=0;
        cin>>n>>x;
        for(int i=1;i<n;i++){
            int temp;
            cin>>temp;
            r+=temp;
        }
        int a=(n*x)-r;
        if(a>0){
            cout<<a<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}