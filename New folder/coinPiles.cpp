#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, b;
    cin >> a >> b;
    cout << ((a+b)%3==0 && 2*a>=b && 2*b>=a? "YES":"NO") << endl;
}
int main(){
    ll n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}


