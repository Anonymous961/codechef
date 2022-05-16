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
        int n,a,b,c1=0,c2=0;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++){
            if(arr[i]%a==0){
                c1++;
            }
            else if(arr[i]%b==0){
                c2++;
            }
        }
        if(a%b==0 || b%a==0){
            if(a>b){
                c1=c1-c2;
            }
        }
        if(c1<=c2){
            cout<<"ALICE"<<endl;
        }else{
            cout<<"BOB"<<endl;
        }
    }
    return 0;
}