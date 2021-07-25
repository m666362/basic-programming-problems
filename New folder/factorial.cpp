#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans=1;
ll findFactorial(ll n){
    if(n==1)
        return 1;
    else{
        return n*findFactorial(--n);
    }
}

int main(){

    ll a;
    cin >> a;
    ans = findFactorial(a+1);
    cout << ans << endl;
    return 0;
}
