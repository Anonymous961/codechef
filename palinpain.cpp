#include<bits/stdc++.h>
#include<string>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string s1="";
        if(x%2==0 && y%2==0){
            if(x>y){
                for(int i=0;i<x/2;i++){
                    s1+='a';
                }
                for(int i=0;i<y/2;i++){
                    s1+='b';
                }
                string temp=s1;
                reverse(s1.begin(),s1.end());
                cout<<temp+s1<<endl;
                cout<<s1+temp<<endl;
            }else{
                for(int i=0;i<y/2;i++){
                    s1+='b';
                }
                for(int i=0;i<x/2;i++){
                    s1+='a';
                }
                string temp=s1;
                reverse(s1.begin(),s1.end());
                cout<<temp+s1<<endl;
                cout<<s1+temp<<endl;
            }
        }else if(x%{
            cout<<-1<<endl;
        }
    }
    return 0;
}