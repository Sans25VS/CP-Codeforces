#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,1,r) for((i) = (1);(i) <= (r),(i)++)
#define rep1(i,r,1) for((i) =(r);(i) >=(1) ,i--)

ll max(ll a , ll b , ll c){
    return max(a,max(b,c));
}

ll min(ll a , ll b , ll c){
    return min(a,min(b,c));
}
int main(){
    ll t; 
    cin >> t;
    while(t--){
        ll b;
        cin >> b;
        ll i;
        ll dp1[b+1];
        ll dp2[b+1];
        dp1[0]=1;
        dp2[0]=dp1[0];
        rep(i,1,b);
        {
            char g;
            cin>>g;
            if(g == '+'){
                ll e; cin>>e;
                dp1[i] = max(dp1[i-1]+e,dp2[i-1]+e,dp1[i-1]);
                dp2[i] = min(dp1[i-1]+e,dp2[i-1]+e,dp1[i-1]);
            }
            else if(g == '-'){
                ll e; cin>>e;
                   dp1[i] = max(dp1[i-1]-e,dp2[i-1]-e,dp1[i-1]);
                dp2[i] = min(dp1[i-1]-e,dp2[i-1]-e,dp1[i-1]);
            }
            else if(g == '*'){
                ll e; cin>>e;
                   dp1[i] = max(dp1[i-1]*e,dp2[i-1]*e,dp1[i-1]);
                dp2[i] = min(dp1[i-1]*e,dp2[i-1]*e,dp1[i-1]);
            }
            else if(g == '/'){
                ll e; cin>>e;
                   dp1[i] = max(dp1[i-1]/e,dp2[i-1]/e,dp1[i-1]);
                dp2[i] = min(dp1[i-1]/e,dp2[i-1]/e,dp1[i-1]);
            }
            else {
                ll e; cin>>e;
                   dp1[i] = max(-1*dp1[i-1],-1*dp2[i-1],dp1[i-1]);
                dp2[i] = min(-1*dp1[i-1],-1*dp2[i-1]+e,dp1[i-1]);
            }
        }  
        cout << dp1[b];
        cout <<"\n";

    }
        return 0;

}
