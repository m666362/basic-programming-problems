#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter word : " ;
    string word;
    cin >> word;
    cout << "P " << " VP" << " S" << endl;
    for(int i=0; i< word.length(); i++){
        for(int j=0; j<word.length(); j++){
            if(i!=j){
                for(int k=0; k<word.length(); k++)
                    if(i!=k && j!=k)
                        cout << word[i] << "  " << word[j] << "  " << word[k] << endl;
            }
        }
    }
    return 0;
}
