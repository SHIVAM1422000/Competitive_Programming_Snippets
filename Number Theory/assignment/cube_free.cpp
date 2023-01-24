#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> sieve(ll n)
{

    
    vector<bool> arr(n+1 , true);

    arr[0] = false;

    for (int i = 2; i<=100; i++)
    {
        if (arr[i] == false)
            continue;

        for (int j = i * i * i ; j <= n; j+= (i*i*i))
        {
            arr[j] = false;
        }
    }

   


    return arr; 
}

int main()
{
    
    ll size=1000000;
    vector<bool> arr=sieve(size);
     unordered_map<ll , ll> map;
    ll pos=1;
    for(int i=1;i<=size;i++) if(arr[i]) map[i]=pos++;

   int t;
   cin >> t;
   int tc=1;
   while(tc<=t){

    ll n;
    cin >> n;
    if(map.find(n)==map.end()){
         cout << "Case " << tc << ": " << "Not Cube Free"<<endl;
    }else{
        cout << "Case " << tc << ": " << map[n] << endl;

    }


    ++tc;

    
   }

     

}
