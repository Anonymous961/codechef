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
        int x,y;
        cin>>x>>y;
        if(x>0 && y>0 && x==y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}