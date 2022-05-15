#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int d[3],s[3];
    int t1,t2;
    for(int i=0;i<t;i++){
        t1=0;
        t2=0;
        for(int j=0;j<3;j++){
            cin>>d[j];
            t1+=d[j];
        }
        for(int k=0;k<3;k++){
            cin>>s[k];
            t2+=s[k];
        }
        if(t1==t2){
            if(d[0]>s[0]){
                cout<<"Dragon"<<endl;
            }else if(d[0]==s[0]){
                if(d[1]>s[1]){
                    cout<<"Dragon"<<endl;
                }else if (d[1]==s[1]){
                    cout<<"Tie"<<endl;
                }else{
                    cout<<"Sloth"<<endl;
                }
            }
            else{
                cout<<"Sloth"<<endl;
            }
        }else if(t1>t2){
            cout<<"Dragon"<<endl;
        }else{
            cout<<"Sloth"<<endl;
        }
    }
    return 0;
}