#include<bits/stdc++.h>
using namespace std;
int count_sq(int n){
    int count=0;
    for(int i=1;i<=n;i+=2){
        int k=n-i+1;
        count+=k*k;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<count_sq(n)<<endl;
    }
}