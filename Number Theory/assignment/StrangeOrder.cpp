#include <bits/stdc++.h>
#include <stack>
using namespace std;
using ll = long long;

int main(){



         int n;
         cin >> n; 

         vector<bool> arr(n+1,true);
         vector<int> ans(n);

         for(int i=sqrt(n);i>=2;i--){
            if(arr[i]==false) continue;
            cout<<"Starting From: " << i << endl;
            for(int j=i;j<=n;j+=i){
                // stack<int> s;
                if(j%i==0 && arr[j]){
                    s.push(j);
                    arr[j]=false;
                }
            }
         }

         ans.push_back(1);

         for(int i:ans) cout<<i<<" ";
         cout<<endl;
   

}



