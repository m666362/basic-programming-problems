#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, x, i, j;
    cin >> n >> x;
    int a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    for(i=1; i<(1<<n); i++){
        cout << "i = " << i << " ";
        for(j=0; j<n; j++){
            if((i>>j)&1)
                cout << a[j] << " ";
        }
        cout << endl;
    }
}
