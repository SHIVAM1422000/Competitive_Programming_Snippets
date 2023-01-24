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


int main()
{

    int a, b;
    cin >> a >> b;
    // we have to return the x , y  and c/ gcd(a ,b )


    Triplet ans = extendedEuclid(a , b);
    cout << ans.x << endl;
    cout << ans.y << endl;
    cout << ans.gcd << endl;
    return 0;
}


// To check whether we go right ans;
// =>  a * ans.x + b * ans.y   =  ans.gcd 
