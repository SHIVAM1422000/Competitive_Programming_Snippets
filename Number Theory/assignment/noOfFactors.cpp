#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> factorSieve(ll n)
{

    vector<ll> arr(n + 1, 0);

    for (ll i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (ll j = i; j <= n; j += i)
            {
                arr[j]++;
            }
        }
    }

    return arr;
}

int main()
{

     
    ll size=1000001;
    // cout<<"Factor Sive" << endl;
    vector<ll> arr=factorSieve(size);
    // for(int i=0;i<=21;i++){
    //     cout << "Factors of " << i << " : " << arr[i] << endl;
    // }
    vector<vector<ll>> prime(11 , vector<ll>(size,0));
    for(int i=0;i<=10;i++){
        for(int j=0;j<=size;j++){
            if(arr[j]==i) {
                prime[i][j]=prime[i][j-1]+1;
            }else{
                prime[i][j]=prime[i][j-1];
            }
        }
    }

    // cout<< " Factor 2D array " << endl;
    // for(int i=1; i<=2 ;i++) {
    //      for(int j=0; j<=10;j++){
    //         cout << prime[i][j] << " " ;
    //      }
    //      cout<<endl;
    // }
 
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        // cout<<"Right: "  << prime[n][b] << " Left: " << prime[n][(a-1)] << endl; 
        cout << (prime[n][b] - prime[n][(a-1)]) << endl;
    }
}
