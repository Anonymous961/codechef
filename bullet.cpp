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
        int x,y,z;
        cin>>x>>y>>z;
        int a=z-(y/x);
        if(a<0){
            cout<<0<<endl;
        }else{
            cout<<a<<endl;
        }
    }
    return 0;
}