#include <bits/stdc++.h>
using namespace std;
#define ll long long

void tower(int n, int p, int a, int f){
    if(n==1){
        cout << p << " " << f << endl;
        return;
    }
    tower(n-1, p, f, a);
    cout << p << " " << f << endl;
    tower(n-1, a, p, f);

}

int main(){
    ll n, s;
    cin >> n;
    s = (1<<n) -1;
    cout << s << endl;
    tower(n,1,2,3);

}
