
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // A=65, Z=90
    bool cond=true, specialCond=true;
    ll sum=0;
    vector<int> ans;
    int index[91] = {0},temp,special=0;
    string word;
    cin >> word;
    for(int i=0; i<word.length(); i++){
        temp = (int)word[i];
        index[temp]++;
    }
    sum = accumulate(index, index+91, sum);
    if (sum%2==0){
        for(int i=65; i<91; i++){
            if(index[i]%2!=0){
                cond = false;
                break;
            }
        }
    }else{
        for(int i=65; i<91; i++){
            if(index[i]%2!=0 && index[i]!=0){
                if(cond==false){
                    specialCond=false;
                    break;
                }else{
                    cond = false;
                    special=i;
                }
            }
        }
        if(specialCond==false){
            cond=false;
        }
        else{
           cond = true;
        }
    }
    if(cond==false)
        cout << "NO SOLUTION";
    else{

        for(int i=65; i<91; i++){
        if(index[i]>0){
            for(int j=1; j<=index[i]/2; j++){
                ans.push_back(i);
            }
        }
    }
    if(special>0)
        ans.push_back(special);

    for(int i=90; i>=65; i--){
        if(index[i]>0){
            for(int j=1; j<=index[i]/2; j++){
                ans.push_back(i);
            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << char(ans[i]) << "";
    }
    }
    cout << endl;

    return 0;
}


