#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    char buffer[33];
    ll n, half=0, sum=0, i,j,subSetSum=0,minDiff,temp;
    cin >> n;
    ll p[n];

    for(i=0; i<n; i++){
        cin >> p[i];
        sum+=p[i];
    }
    half = sum/2;
    minDiff = half;
    for(i=1; i<(1<<n); i++){
        for(j=0; j<n; j++){
            if((i>>j)&1)
                subSetSum+=p[j];
        }
        temp = half-subSetSum;
        if(abs(temp)<minDiff)
            minDiff=abs(temp);
        subSetSum=0;
    }
    minDiff*=2;
    if(sum%2!=0)
        minDiff++;
    cout << minDiff<< endl;
}
