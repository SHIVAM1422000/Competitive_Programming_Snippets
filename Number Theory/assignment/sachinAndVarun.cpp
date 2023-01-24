#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Triplet {
public:
  ll x;
  ll y;
  ll gcd;
};

Triplet extendedEuclid(ll a, ll b) {

  if (b == 0) {
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
  ans.y = smallAns.x - ((a / b) * smallAns.y);
  return ans;
}

ll moduloInverse(ll a, ll m) {

  ll ans = extendedEuclid(a, m).x;
  // to handle the negative mod inv
  ans = ((ans % m) + m) % m;
  return ans;
}

int main() {

  int t;
  cin >> t;
  while (t--) {

    ll a, b, d;
    cin >> a >> b >> d;
  

    ll g = __gcd(a, b);
    if (d % g) {
      cout << 0 << endl;
      continue;
    }

       // did this so to make the condition of modulo inverse valid ie, gcd(b,a)==1 for their mod inverse to exist
       a/=g; b/=g; d/=g;
     


    ll y1 = ((d % a) * (moduloInverse(b, a))) % a;
    if (d < y1 * b) {
      cout << 0 << endl;
      continue;
    }


    ll n = ((d / b) - y1) / a;
    ll ans = n + 1;
    cout << ans << endl;
  }
}
