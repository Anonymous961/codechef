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
        int w,x,y,z,s;
        cin>>w>>x>>y>>z;
        s=w+y*z;
        if(s==x){
            cout<<"filled"<<endl;
        }else if(s<x){
            cout<<"Unfilled"<<endl;
        }else{
            cout<<"overFlow"<<endl;
        }
    }
    return 0;
}