#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,i;
        cin>>a;
        for(i=1;i<a;i++)
        {
            if((i*(i+1)/2>=a))
                break;
        }
        ll sum=i*(i+1)/2;
        if(sum-a==1)
            cout<<i+1<<endl;
        else
            cout<<i<<endl;
    }
    return 0;
}