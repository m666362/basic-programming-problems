#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> set1, set2;
ll p1,p2, sum1=0, sum2=0;

void printSet(vector<ll> const &myset){
    cout << myset.size() << endl;
    for(ll i=0; i<myset.size(); i++){
        cout << myset[i] << " ";
    }
    cout << endl;
}

void pushNumber1 (ll lower, ll upper){
    for(ll i=lower; i<=upper; i++){
        set1.push_back(i);
    }
}

void pushNumber2 (ll lower, ll upper){
    for(ll i=lower; i<=upper; i++){
        set2.push_back(i);
    }
}

void solve1(ll n){
    p1=n/4;
    p2=n/4*3;
    pushNumber1(1, p1);
    pushNumber1(p2+1,n);
    pushNumber2(p1+1, p2);
}

void solve2(ll n){
    pushNumber1(1, 2);
    pushNumber2(3, 3);
    n-=3;
    p1=n/4;
    p2=n/4*3;
    pushNumber1(1+3, p1+3);
    pushNumber1(p2+4,n+3);
    pushNumber2(p1+4, p2+3);
}

int main(){
    ll n;
    cin >> n;
    if(n%4==0){
        cout << "YES" << endl;
        solve1(n);
        printSet(set1);
        printSet(set2);
    }else if (n%4==3){
        cout << "YES" << endl;
        solve2(n);
        printSet(set1);
        printSet(set2);
    }else {
        cout << "NO" << endl;
    }
    return 0;
}
