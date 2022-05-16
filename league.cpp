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
        int n,first,sec;
        cin>>n;
        first=(n-1)*3;
        sec=((n-1)/2)*3;
        cout<<first-sec<<endl;
    }
    return 0;
}