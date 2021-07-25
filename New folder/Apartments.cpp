#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, k, ans=0;
    cin >> n >> m >> k;
    ll a[n], b[m];
    // ll a[] = {25, 35, 95, 35, 75, 65, 85, 45, 50, 55};
    // ll b[]={85, 75, 45, 65, 75, 80};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort (b, b+m);
    /*
    cout << "Sorted a[n]: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl << "Sorted b[m]: ";
    for(int i=0; i<m; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    */
    n--;
    m--;
    while(n>=0 && m>=0){
        if(b[m]>(a[n]+k))
            m--;
        else if (b[m]<(a[n]-k))
            n--;
        else{
            m--;
            n--;
            ans++;
        }

    }
    cout << ans << endl;










}
