#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    string dna;
    cin >> dna;
    ll maximum=1,temp=1,i,len = dna.length();
    for(i=1; i<len; i++){
        if(dna[i]==dna[i-1]){
            temp++;
        }else {
            maximum = max(temp,maximum);
            temp = 1;
        }
    }
    maximum = max(temp,maximum);
    cout << maximum << endl;
    return 0;
}
