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
        int n,c=0;
        cin>>n;
        int a[n];
        string s1,s2;
        cin>>s1;
        cin>>s2;
        for(int i=0;i<n+1;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(s2[i]==s1[i]){
                c++;
            }
        }
        cout<<a[c]<<endl;
    }
    return 0;
}