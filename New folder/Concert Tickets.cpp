#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
const lli mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n, m, i, temp;
    cin >> n >> m;
    multiset<lli, greater<int> > a;
    for(i=0; i<n; i++){
        cin >> temp;
        a.insert(temp);
    }

    multiset <lli> :: iterator p;
    while(m--){
        cin >> temp;
        p=a.lower_bound(temp);
        if(p == a.end()){
            cout << -1 << endl;
        }else{
            cout << *p << endl;
            a.erase(p);
        }
    }
    return 0;
}






