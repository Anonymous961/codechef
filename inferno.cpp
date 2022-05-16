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
        int n,x,s=0,b=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            s+=_ceil(a[i],x);
        }
        cout<<min(s,*max_element(a,a+n))<<endl;
    }
    return 0;
}