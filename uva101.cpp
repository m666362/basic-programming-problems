#include<bits/stdc++.h>
using namespace std;
int main()
{
    printf("------ Vector Code ------\n");
    // Declaring variable
    int number, a, b;
    char letter;
    char word[4];
    char word2[4];

    while(1)
    {
        scanf("%s",word);
        letter = word[0];
        scanf("%d",&a);
        scanf("%s",word2);
        scanf("%d",&b);

        printf("%s",word);
        printf("%d ", a);
        printf("%s ", word2);
        printf("%d\n", b);
        printf("%c", letter);
    }
}





