#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,temp,sum=0;
    cin >> n;
    for(int i=1; i<n; i++){
        cin >> temp;
        sum +=temp;
    }
    cout << n*(n+1)/2 - sum << endl;
    return 0;
}
