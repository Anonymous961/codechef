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
        int n;
        cin>>n;
        int a[n];
            for(int i=0;i<n;i++){
                int temp ;
                cin >> temp;
                int p = (int)log2(temp);
                a[i] = p;
            }
            int q;
            cin >> q;
            for(int i =0;i<q;i++){
                int l,r,x;
                cin>>l>>r>>x;
                int p = (int)log2(x);
                int c = 0;
                for(int j= l-1;j<r;j++){
                    if(a[j]==p)c++;
                }
                int ans =(l-r+1)-c;
                
                cout << ans << endl;
            }
    }
    return 0;
}