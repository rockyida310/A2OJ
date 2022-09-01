//Author : coder_firegun
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


bool distinct(int n){
    unordered_set<int> s;
    while(n){
        int d = n%10;
        if(s.count(d))
            return false;
        s.insert(d);
        n /= 10;
    }
    return true;
}

void solve(){
   int n;
   cin>>n;
   ++n;
   while(!distinct(n)){
    ++n;
   }

   cout<<n<<endl;
}
  
signed main (void) 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; 
    // cin>>t;
    for(int i=1;i<=t;++i)
    {
        solve();
        // cout<<"\n";
    }
    return 0; 
} 