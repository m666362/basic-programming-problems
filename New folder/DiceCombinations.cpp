#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll num){
    if(num==1 || num==0)
        return 1;
    else
        return num*factorial(num-1);
}

ll nCr(ll n, ll r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    ll n, addSign, i, ans=0;
    cin >> n ;
    n--;
    for(i=n; i>=0; i--){
        ans = ans + nCr(n,i);
    }
    cout << ans << endl;
}

