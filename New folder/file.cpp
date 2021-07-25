#include <bits/stdc++.h>
#include <cstring>
using namespace std;

string line, word, tempValue;
vector<vector<string>> strings;
vector<string> temp, wordTemp;
int row, col;

void solve()
{
    getline(cin, line);
    stringstream X(line);

    while (getline(X, word, '>'))
    {
        temp.push_back(word);
    }

    wordTemp.push_back(temp[0]);
    stringstream Y(temp[1]);
    while (getline(Y, word, ','))
    {
        wordTemp.push_back(word);
    }

    strings.push_back(wordTemp);
    wordTemp.clear();
    temp.clear();

    /*
    for (int i = 0; i < wordTemp.size(); i++)
    {
        cout << wordTemp[i] << endl;
    }
    
    */
    /*
    stringstream Y(strings[1]);
    while (getline(Y, word, ',')) {
        cout << word << endl;
    }

    for(int i=0; i<strings.size(); i++){
        cout << strings[i]<< endl;
    }
    */
}

int main()
{
    string data;
    cout << "heooskfsdlfjsdlkfjsdlkfjsdfl" << endl;
    

    /*
    for (int i = 0; i < strings.size(); i++)
    {
        for (int j = 0; j < strings[i].size(); j++)
        {
            cout << strings[i][j] << endl;
        }
        
    }

    */
    return 0;
}
