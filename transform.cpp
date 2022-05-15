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
        int x;
        cin>>x;
        if(x%3==0){
            cout<<"NORMAL"<<endl;
        }else if(x%3==1){
            cout<<"HUGE"<<endl;
        }else{
            cout<<"SMALL"<<endl;
        }
    }
    return 0;
}