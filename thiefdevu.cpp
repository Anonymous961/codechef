#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int m,x,y;
        cin>>m>>x>>y;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int un=x*y;
        int house[100];
        for(int i=0;i<100;i++){
            house[i]=0;
        }
        for(int i=0;i<m;i++){
            for(int j=a[i]-un-1;j<a[i]+un;j++){
                house[j]=1;
            }
        }
        int c=0;
        for(int k=0;k<100;k++){
            if(house[k]==0){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}