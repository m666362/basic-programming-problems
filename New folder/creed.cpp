#include<bits/stdc++.h>
using namespace std;

void multiple(int a, int b){
    int c=a/b;
    if((b*c)<(a-(b/2)))
        c++;
    cout << c;
}

int main(){
    int a, b;
    cin >> a >> b;
    multiple(a, b);
}
