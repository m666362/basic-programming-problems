#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int arr[8]={-1,2,4,-3,5,2,-5,2}, sum=0, best=0;

    for (int i=0; i<8; i++){
        //arr[i] = rand()%20 +1-5;
        cout << arr[i] << " ";
    }

    cout << endl;
    for (int i=0; i<n; i++){
        sum = max(arr[i],sum+arr[i]);
        best = max(best,sum);
        cout << sum << " ";
    }
    cout << endl << "Best : "<< best << endl;
    return 0;
}
