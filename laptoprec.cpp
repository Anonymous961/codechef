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
        int n,ans,temp=0,idx=0;
        cin>>n;
        int a[n],c[1000]{0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            c[a[i]]++;
        }
        int maxf=*max_element(c, c+1000);
        int ct=0,loc;
        for(int i=0;i<1000;i++)
        {
            if(c[i]==maxf)
            {
                loc=i;
                ct++;
            }
        }
        if(ct==1)
            cout<<loc<<endl;
        else
            cout<<"CONFUSED"<<endl;
    }
    return 0;
}