#include <bits/stdc++.h>
using namespace std;
#define ll long long

string convertWord(string word){
    for(int i=0; i<word.length(); i++){

        if((word[i]>=65 && word[i]<=67) || (word[i]>=97 && word[i]<=99))
            word[i] = '2';
        else if((word[i]>=68 && word[i]<=70)|| (word[i]>=100 && word[i]<=102))
            word[i]='3';
        else if((word[i]>=71 && word[i]<=73)|| (word[i]>=103 && word[i]<=105))
            word[i]='4';
        else if((word[i]>=74 && word[i]<=76)|| (word[i]>=106 && word[i]<=108))
            word[i]='5';
        else if((word[i]>=77 && word[i]<=79)|| (word[i]>=109 && word[i]<=111))
            word[i]='6';
        else if((word[i]>=80 && word[i]<=83)|| (word[i]>=112 && word[i]<=115))
            word[i]='7';
        else if((word[i]>=84 && word[i]<=86)|| (word[i]>=116 && word[i]<=118))
            word[i]='8';
        else if((word[i]>=87 && word[i]<=90)|| (word[i]>=119 && word[i]<=122))
            word[i]='9';
        else {
            cout << "else" << endl;
        }
    }
    return word;
}

string compareWord(string number, string word){
    string ans = "Impossible";
    int index=0;
    for(int i=0; i<number.length(); i++){
        if(number[i]==word[index]){
            if(index==(word.length()-1)){
                ans = "Possible";
                break;
            }
            index++;
        }
        else
            index=0;
    }
    return ans;
}

int main(){
    cout << "Put only digit : ";
    string number, word, convertedWord;
    cin >> number;
    cout << "How many Integer? : ";
    int n, i;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> word;
        convertedWord = convertWord(word);
        cout << "Converted  Word: " << convertedWord << endl;
        cout << compareWord(number, convertedWord) << endl;
    }
}
