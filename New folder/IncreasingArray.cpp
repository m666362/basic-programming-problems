
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll n, val,sum=0, maxinum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> val;
        maxinum = max(val,maxinum);
        sum += maxinum - val;
    }
    cout << sum << endl;
    return 0;
}
