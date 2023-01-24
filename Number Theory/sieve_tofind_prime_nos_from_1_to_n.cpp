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

    int n;
    cin >> n;
    vector<bool> arr=sieve(n);
    int ans=0;
    for(bool i: arr) if(i) ++ans;
    cout << ans << endl;
}
