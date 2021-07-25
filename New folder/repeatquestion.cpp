#include <bits/stdc++.h>

using namespace std;

void checkRepeat(vector<string> words);
double checkRepeats(vector<string> words, vector<string> repeatWords);

bool compareLen(const std::string& a, const std::string& b)
{
    return (a.size() < b.size());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string question, repeatqs, colonSeparator, spaceSeparator;
    vector<string> words, repeatWords;

    cout << "Ask a question: " << endl;

    getline(cin, question);
    stringstream X(question);
    while (getline(X, spaceSeparator, ' ')) {
        if(spaceSeparator !="?")
         words.push_back(spaceSeparator);
    }

    cout << "Question from database: "<< endl;

    getline(cin, repeatqs);
    stringstream Y(repeatqs);
    while (getline(Y, spaceSeparator, ' ')) {
        if(spaceSeparator !="?")
         repeatWords.push_back(spaceSeparator);
    }



    // checkRepeat(words);
    double count = checkRepeats(words, repeatWords);
    double totalWord = words.size()+repeatWords.size()-count;
    double percentage = (count/totalWord)*100;

    cout <<"Repeated words: "<< count << endl;
    cout <<"Percentage matched: "<< percentage << "%" << endl;
    if(percentage>=75){
        cout <<"This question has been asked before. Please check this link."<< endl;
    }

}

double checkRepeats(vector<string> words, vector<string> repeatWords){

    int i=0, j=0;
    double count=0;
    sort(words.begin(), words.end(), compareLen);

    sort(repeatWords.begin(), repeatWords.end(), compareLen);

    for(j=0; j<repeatWords.size() || i<words.size(); ){
        if(repeatWords[j].length()<words[i].length()){
            j++;
        }else if(repeatWords[j].length()>words[i].length()){
            i++;
        }else{
            if(repeatWords[j]== words[i]){
                count++;
            }
            i++;
            j++;
        }
    }
    return count;
}

void checkRepeat(vector<string> words){
    vector<string> duplicate;

    // STL function to sort the array of string
    sort(words.begin(), words.end());
    for(int i=0; i<words.size(); i++){
        cout << words[i] << endl;
    }

    for (int i = 1; i < words.size(); i++) {
        if (words[i - 1] == words[i]) {

            // STL function to push the duplicate
            // words in a new vector string
            if (duplicate.empty())
              duplicate.push_back(words[i]);
            else if (words[i] != duplicate.back())
                duplicate.push_back(words[i]);
        }
    }

    if (duplicate.size() == 0)
        cout << "No Duplicate words" << endl;
    else
        for (int i = 0; i < duplicate.size(); i++)
            cout << duplicate[i] << endl;
}
