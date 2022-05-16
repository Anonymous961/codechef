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
        string a,b;
        cin>>a>>b;
        int count[26]{0};
        bool flag=true;
        for(int i=0;i<a.size();i++){
            count[a[i]-97]++;
        }
        for(int i=0;i<b.size();i++){
            count[b[i]-97]++;
        }
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            string c;
            cin>>c;
            for(int j=0;j<c.length();j++){
                if (count[c[j]-97]>0){
                    count[c[j]-97]--;
                }else{
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}