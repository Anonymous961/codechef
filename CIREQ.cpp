#include<bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
using namespace std;
void posi(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        if(!(arr[i] >i)){
            return 0;
        }   
    }
    return 1;
}

// void check(int arr[],int &c){
//     int a[arr.size()-1];
//     for(int i=0;i<arr.size()-1;i++){
//         a[i]=arr[i+1];
//     }
//     if 
// }
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        // ll x[1e5];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            // x[i]++;
        }
        if(posi(arr)){
            cout<<1<<endl;
            continue;
        }
        int c=1;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i+1]>arr[i]){
                c++;
            }else if(arr[i]==arr[i+1]){
                c--;
            }
        }
        cout<<c<<endl;
        
        // // vector<int vector<int>>v;
        // // sort(arr,arr+n);
        // // for(int i=0;i<n;i++){
        // //     v.push_back(arr[i]);
        // // }
        // for(int i=1;i<n;i++){
        //     if(posi(slicing(arr,i,n-1))){
        //         c++;
        //         cout<<c<<endl;
        //         break;
        //     }
        //     c++;
        // }

    }
    return 0;
}