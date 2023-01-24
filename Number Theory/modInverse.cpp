// a * x  +  b * y = c = gcd(a, b)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Triplet
{
public:
    ll x;
    ll y;
    ll gcd;
};

Triplet extendedEuclid(ll a, ll b)
{

    if (b > a)
        return extendedEuclid(b, a);

    if (b == 0)
    {
        Triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }

    Triplet smallAns = extendedEuclid(b, a % b);
    Triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a / b) * smallAns.y;
    return ans;
}


ll moduloInverse(ll a, ll m) {
     
     ll ans = extendedEuclid(a , m).x;
     // to handle the negative mod inv
      ans =  ( (ans% m) + m ) % m;

      return ans;

}


int main()
{

    int a, m;
    cin >> a >> m;
    
    // we have to return the x , y  and c/ gcd(a ,b )
    cout << " Modulo Inverse Of a, b " << moduloInverse(a,m) << endl;

}



// (A * modInv(A , m) ) % m = 1

