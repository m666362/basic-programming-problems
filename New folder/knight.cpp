#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,i,k,ans;
    cin >> n;
    for(i=1; i<=n; i++){
        k=i*i;
        if(i>2)
            ans = k*(k-1)-4*2-2*4*3-(i-4)*4*4-4*4-(i-4)*4*6-(i-4)*(i-4)*8;
        else
            ans = k*(k-1);
        ans = ans/2;
        cout << ans << endl;
    }
    return 0;
}
