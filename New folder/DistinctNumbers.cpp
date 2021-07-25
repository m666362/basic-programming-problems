#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, x;
    set<int, greater<ll> > s1;
    cin >> n;
    while(n--){
        cin >> x;
        s1.insert(x);
    }
    cout << s1.size() << endl;
    return 0;
}
