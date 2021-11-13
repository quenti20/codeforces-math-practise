#include<bits/stdc++.h>
#define PI 3.142857
#define ll long long
#define lli long long int
#define MOD 1000000007
#define f(s,n) for(int i=s;i<n;i++)
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n];
         for(int i= 1;i<=n;i++) cin>> a[i];
         ll c = 0;
         for(ll i = 1;i<=n;i++){
            for(int j = a[i]-i;j<=n;j += a[i]){
                if(j>=0){
                if(a[j]*a[i] == i+j && i<j)
                c++;
                }
            }
        }
        cout << c << "\n";

    }
    return 0;
}