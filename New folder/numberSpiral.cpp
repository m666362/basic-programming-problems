#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t,x,y,i,maxCord,maxVal;
    cin >> t;
    ll ans[t];
    for(i=0;i<t;i++){
        cin >> x >> y;
        maxCord = max(x,y);
        maxVal = maxCord*maxCord;

        if(maxCord%2==0){
            if(x<y){
                ans[i] = maxVal+x-y-y+1;
            }else {
                ans[i] = maxVal-y+1;
            }
        }else {
            if(x>y){
                ans[i] = maxVal-x+1-x+y;
            }else{
                ans[i] = maxVal-x+1;
            }
        }
    }
    for(i=0; i<t; i++){
        cout << ans[i] << endl;
    }
    return 0;
}
