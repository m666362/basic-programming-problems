#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multimap<ll,ll > a;
    ll n, subAns=0, ans=0, f, s;
    cin >> n;
    while(n--){
        cin >> f >> s;
        a.insert(make_pair(f,s));
    }

}
