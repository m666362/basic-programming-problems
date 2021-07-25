#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string line, word;
    int spanOfWord;
    vector<string> vectors;

    getline(cin, line);
    stringstream X(line);

    while (getline(X, word, ' ')) {
        vectors.push_back(word);
    }
    for(int i=0; i<vectors.size(); i++){
        if(vectors[i][0]>=65 && vectors[i][0]<=96){
            spanOfWord = vectors[i].length();
            vectors[i][spanOfWord-1] = vectors[i][spanOfWord-1]-32;
            vectors[i][0] = vectors[i][0]+32;
        }

        reverse(vectors[i].begin(), vectors[i].end());
        cout << vectors[i] << " ";
    }
    return 0;
}
