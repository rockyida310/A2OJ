//Author : rockyida310
#include<bits/stdc++.h>
using namespace std;

inline void solve(){
    //just stimulate t is small
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t--){
        string curr = s;
        bool operated = false;

        for(int i=0;i+1<n;++i){
            if(curr[i]=='B' && curr[i+1]=='G'){
                swap(curr[i],curr[i+1]);
                operated = true;
                ++i;
            }
        }

        s = curr;
    }

    cout<<s<<endl;
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
    }
    return 0; 
} 