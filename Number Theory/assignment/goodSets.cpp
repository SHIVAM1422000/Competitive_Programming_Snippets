#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){


     int t;
     cin >> t;
     while(t--){
         int n;
         cin >> n;  
         vector<ll> v;
         for(int i=0;i<n;i++){
             ll temp;
             cin>> temp;
             v.push_back(temp);
         } 



        ll mod=1000000007;
        ll size=(7.5 * 100000);
         vector<ll> sieve(size+1,0);
         for(ll i: v) sieve[i]=1;

         for(int i=1;i*i<=size;i++){
            if(sieve[i]>0){
                for(int j=i+i ; j<=size ; j+=i){
                    if(j%i==0 && sieve[j]>0) sieve[j]=(sieve[j]+sieve[i])%mod;
                }
            }
         }


         ll ans=0;
         for(ll i:sieve) ans=(ans+i)%mod;
         cout<<ans<<endl;



      

     }
   

}



