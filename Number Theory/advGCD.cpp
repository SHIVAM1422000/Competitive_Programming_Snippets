#include <bits/stdc++.h>
#include <string>
using namespace std;
using ll = long long;



int main(){


     int t;
     cin >> t;
     while(t--){
         ll a;
         string b;
         cin >> a >> b;


        ll c=0;
        for(int i=0;i<b.size() ; i++) {
             c = ((c *  10) + (b[i]-'0'))%a;
        }


        cout << gcd(c,a) << endl;

         
       

     }
   

}



