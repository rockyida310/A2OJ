//Author : coder_firegun
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve(){
   string s;
   cin>>s;

   string ans;
   for(int i=0;i<s.length();++i){
        if(s[i]=='.')
            ans.push_back('0');
        else if(i+1<s.length() && s[i+1]=='.'){
            ans.push_back('1');
            ++i;
        }
        else{
           ans.push_back('2');
           ++i; 
        } 
   }

   cout<<ans<<endl;
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