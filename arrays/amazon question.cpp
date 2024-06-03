int main(){
    ll sum = 0;
    ll n;
    cin >> n ;
    ll b[n+1] = {0};
    ll i = 1;
    while(i<=n){
        cin >> b[i] ;
        i++;
}
ll back[n+1] = {0};
unorderd map<ll,ll> kk;
i = 1;
while(i<=n){
    ll v = b[i];
    if(kk.find(v)==kk.end()){
        back[i] = 0;
        kk[v] = i;
}
else{
    back[i] = kk[v];
    kk[v] = i;
}
i++;
}
ll front[n+1] = {0};
kk.clear();
i=n;
while(i>=1){
ll[v] = b[i];
if(kk.find(v)==kk.end()){
    front[i] = n+1;
    kk[v] = i;
}
else{
    front[i] = kk[v];
    kk[v] = i;
}
i--;
}
ll one[n+1] = {0};
i = 1;
while(i<=n){
ll x = abs(i - back[i]) - 1;
ll y = abs( front[i] - i ) - 1;
one [i] = x*y + x + y + 1;
sum = sum + one[i];
i++; 
}  
i = 1;
while(i<=n){
    if(back[i] !=0){
        ll x = back[i];
        ll y = (front[i] - i);
        two i = x*y;
    }
    sum = sum + two[i];
    i++; 
}
cout << sum;
}