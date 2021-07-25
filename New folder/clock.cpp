#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string time, colonSeparator, spaceSeparator;
    vector<string> vectors;
    int second, addition,h,m,s;
    string sign="am";
    int a[3];
    getline(cin, time);
    stringstream X(time);
    while (getline(X, spaceSeparator, ' ')) {
        vectors.push_back(spaceSeparator);
    }
    stringstream Y(vectors[0]);
    while (getline(Y, colonSeparator, ':')) {
        vectors.push_back(colonSeparator);
    }
    for(int i=2,j=0; i<vectors.size(); i++, j++){
        istringstream(vectors[i]) >> a[j];
    }
    second = a[0]*3600+a[1]*60+a[2];
    if(vectors[1]=="pm" )
        second = second + 43200;
    cin >> addition;
    second = second+addition;
    a[0]=second/3600;
    second=second%3600;
    a[1]=second/60;
    a[2]=second%60;
    if(a[0]>24){
        a[0]-=24;
    }else if(a[0]>12){
        sign="pm";
        a[0]-=12;
    }
    for(int i=0;i<3;i++){
        if(a[i]<10){
            cout << "0";
        }
        if(i<2)
        cout << a[i] << " : ";
        else
        cout << a[i] << " " << sign;

    }
}
// 02:03:45 am
// 02:03:45 pm
