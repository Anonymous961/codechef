#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
int _ceil(int a,int b){return a%b==0?a/b:a/b+1;}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m>>x;
        if(_ceil(m,x)>1){
            cout<<n-1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}