#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    char aBuffer[33], bBuffer[33];
    int a,b;
    cin >> a >> b;
    itoa(a,aBuffer, 2);
    itoa(b,bBuffer, 2);
    cout << aBuffer << endl << bBuffer ;
    cout << endl << "A & B : "<< itoa((a&b), aBuffer, 2) << endl;
    cout << endl << "A | B : "<< itoa((a|b), aBuffer, 2) << endl;
    cout << endl << "A ^ B : "<< itoa((a^b), aBuffer, 2) << endl;
    cout << endl << "A & B : "<< itoa(35, aBuffer, 2) << endl;
    cout << (b<<1) << endl;
    cout << (a>>1) << endl;
}
