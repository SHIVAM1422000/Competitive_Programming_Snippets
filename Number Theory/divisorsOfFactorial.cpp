#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> sieve(int n)
{

    vector<bool> arr(n+1 , true);
      
    arr[0] = arr[1] = false;

    for (int i = 2; i * i  <= n; i++)
    {
        if (arr[i] == false)
            continue;

        for (int j = i * i; j <= n; j+=i)
        {
            arr[j] = false;
        }
    }

   


    return arr; 
}

int main()
{

    int t;
    cin>>t;

    while(t--){

    int n;
    ll mod= 1000000007;
    cin >> n;
    vector<bool> arr=sieve(n);

     ll ans=1;
    for(int i=2;i<=n;i++){
        ll total=0;
        if(arr[i]){
            // cout<<"Checking for :" << i << endl;
            ll k=i;
            while(k<=n){
                total=total+(n/k);
                // cout<<"Current: " << k <<  "  value: " << total << endl;
                k*=i;
            }
        }
        ans=(ans * (total+1)%mod) % mod;
    }

    cout << ans << endl;

    }
   
}
