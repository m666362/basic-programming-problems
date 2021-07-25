#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,i;
    cin >> n;
    if(n==2||n==3)
        cout << "NO SOLUTION" ;
    else if(n==1)
        cout << 1 ;
    else{
        for(i=2; i<=n; i=i+2)
            cout << i << " ";
        for(i=1; i<=n; i=i+2)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
