#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    ll arr[n];
    vector<string> v;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        while((arr[i]%2==0)&&(arr[i]!=1)){
            arr[i]/=2;
        }
        if(arr[i]!=1){
            v.push_back("Yes");
        }
        else{
            v.push_back("No");
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
}
