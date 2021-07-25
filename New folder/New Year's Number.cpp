#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, a, ans, res;
    cin >> n;
    vector<string> v;
    for(int i=0; i<n; i++){
        cin >> a;
        ans = a/2020;
        res = a%2020;
        if(res<=ans)
            v.push_back("Yes");
        else
            v.push_back("No");
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }

}
