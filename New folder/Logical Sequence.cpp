#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll s, n, i=1;
    cin >> s >> n;
    while(i<=n){
        cout << i;
        if(i++<=n)
            cout << " " << i;
        if(i%s==0)
            cout << endl;
        i++;
    }
    cout << endl;
    return 0;
}
