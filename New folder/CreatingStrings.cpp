#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll findFactorial(ll n){
    if(n==1)
        return 1;
    else{
        return n*findFactorial(--n);
    }
}

void permute_next(string str)
{
    sort(str.begin(), str.end());
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main()
{
    string str;
    cin >> str;
    ll r=1, n, npr;
    n = str.length();
    npr=findFactorial(n+1);
    sort(str.begin(), str.end());
    for(int i=0; i<n; i++){
        if(str[i]==str[i+1])
            r++;
        else{
            npr/=findFactorial(r+1);
            r=1;
        }
    }
    cout << npr << endl;
    permute_next(str);
    return 0;
}

/*
list<string> vect;

void removeString(string str){
    vect.remove(str);
}

void printString(int npr){
    for(int j=1; j<=npr; j++){
        for (list<string>::iterator i = vect.begin(); i!=vect.end(); i++){
            cout << *i << endl;
            removeString(*i);
            break;
        }
    }
}

void permute(string str, string out)
{
    if (str.size() == 0)
    {
        vect.push_back(out);
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        cout << str << "\t" << str.substr(1)<< "\t"  << out + str[0]<<endl;
        permute(str.substr(1), out + str[0]);
        cout << str << "\t" << str.substr(1)<< "\t"  << out + str[0]<<endl;
        rotate(str.begin(), str.begin() + 1, str.end());
        cout << str << "\t" << str.substr(1)<< "\t"  << out + str[0]<<endl;
    }
}
*/
