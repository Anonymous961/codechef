#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,x;
    int s,c;
    for(int j=0;j<t;j++){
        cin>>n>>x;
        int a[n];
        s=0;
        c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b = sizeof(a) / sizeof(a[0]);
        sort(a,a+b,greater<int>());
        for(int k=0;k<n && s<x;k++){
            s+=a[k];
            c++;
        }
        if(x>s){
            cout<<-1<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    return 0;
}