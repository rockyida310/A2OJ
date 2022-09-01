//Author : rockyida310
#include<bits/stdc++.h>
using namespace std;


inline void solve(){
    int n;
    int x=0,y=0,z=0;

    for(cin>>n;n;n--){
        int dx,dy,dz;
        cin>>dx>>dy>>dz;
        x += dx;
        y += dy;
        z += dz;
    }

    puts( (x==0 && y==0 &&z==0) ? "YES" : "NO" );

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