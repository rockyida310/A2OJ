//Author : rockyida310
#include<bits/stdc++.h>
using namespace std;

inline void solve(){
    int n=5;
    int x,y;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int val;
            cin>>val;
            if(val){
                cout<< abs(i-2) + abs(j-2) <<"\n";
                return;
            }
        }
    }
}
signed main () 
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