#include<bits/stdc++.h>
using namespace std;

int simpleRecurrion(int num);

int main()
{
    int num, result;
    cin >> num;
    result = simpleRecurrion(num);
    cout << result << endl;
}

int simpleRecurrion(int num){
    if(num==1){
        return 1;
    }
    return num*simpleRecurrion(num-1);
}