#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k, ans=0, i;
    cin >> n >> k;
    ll a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    i=0;
    n--;
    while(i<=n){
        if((i!=n) && a[n]+a[i]<=k){
            i++;
        }
        n--;
        ans++;
    }
    cout << ans << endl;
}
