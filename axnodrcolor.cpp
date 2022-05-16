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
        int n,b=1;
        cin>>n;
        for(int i=2;i<=n;i++){
            if (i%2==0){
                // b=((~i)&b)+((~b)&i);
                b=(i|b)&(~i|~b);
            }else{
                b=b&i;
            }
        }
        cout<<b<<endl;
    }
    return 0;
}