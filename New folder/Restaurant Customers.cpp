#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
const lli mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multimap<ll,ll > a;
    ll n, e, l, ans;
    cin >> n;
    ans = n;
    while(n--){
        cin >> e >> l;
        a.insert(make_pair(e,l));
    }

    multimap<ll,ll>::iterator p;
    multimap<ll,ll>::iterator t;
    n=ans-1;
    while(a.size()){
        p=a.begin();
        t=a.upper_bound(p->second);
        if(t!=a.end()){
            ans--;
            l=t->second;
            e=p->first;
            a.insert(make_pair(e, l));
            a.erase(t);
        }
        a.erase(p);
    }
    cout << ans << endl;
}
