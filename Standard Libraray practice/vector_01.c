#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    vector<int> vectors;
    for(int i=0;i<10;i++){
        vectors.push_back(i);
    }
    for(int i=0;i<vectors.size(); i++){
        printf("%d", vectors[i]);
    }
    return 0;
}
