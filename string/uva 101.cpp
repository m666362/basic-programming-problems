#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

vector<int> v[25];
int main()
{
    int i,j, number, a, b;
    char work[4], position[4];
    char *moove = "move";
    char *pile = "pile";
    char *over = "over";
    char *onto = "onto";
    char *quit = "quit";
    printf("Its 1 :  %s  %s %s %s\n", moove, pile, over, onto);
    printf("Enter Number: ");
    scanf("%d", &number);
    for(i=0; i<number; i++)
    {
        v[i].push_back(i);
    }
    printf("Enter word: ");
    scanf("%s", &work);
    scanf("%d", &a);
    scanf("%s", &position);
    scanf("%d", &b);
    while(strcmp(work, quit))
    {
        if(work==moove)
        {
            if(position==over)
            {
                printf("Its 1 : move %d over %d\n", a, b);
            }
            else if(position==onto)
            {
                printf("Its 2 : move %d onto %d\n", a, b);
            }
        }
        else if (work==pile)
        {
            if(position==over)
            {
                printf("Its 3 : pile %d over %d\n", a, b);
            }
            else if(position==onto)
            {
                printf("Its 4: pile %d onto %d\n", a, b);
            }
        }
        printf("Enter word: ");
        scanf("%s", &work);
        scanf("%d", &a);
        scanf("%s", &position);
        scanf("%d", &b);
    }
    printf("Its quit\n");
    for(i=0; i<number; i++)
    {
        for(j=0; j<v[i].size(); j++)
        {
            printf("%d: ", v[i][j]);
        }
        printf("\n");
    }
}
