#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,ans=1;
    cin >> n;
    for (int i=0; i<n; i++){
        ans = (ans*2)%((int)1e9+7);
    }
    cout << ans << endl;
    return 0;
}

