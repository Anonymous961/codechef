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
        int n,x=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1){
                x++;
            }
        }
        if(x!=1){
            if(_ceil(n,2)>x){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(n%2==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}